FROM ubuntu:22.04

RUN apt update && apt install -y \
  git \
  python3 \
  python3-pip \
  build-essential \
  cmake \
  gcc-12

RUN pip3 install conan==2.3.0 && \
  conan profile detect

ENV CONAN_CONFIG="https://gitlab.sintef.no/co-simulation/conan-configs.git"
RUN conan config install $CONAN_CONFIG --type git -sf profiles -tf profiles && \
  conan config install $CONAN_CONFIG --type git -sf remotes_public
RUN sed -i 's/compiler.version=11/compiler.version=12/' ~/.conan2/profiles/default


# Before needed changes are upstreamed to https://github.com/dnv-opensource/dds-fmu
# Only for conan cache
RUN git clone https://github.com/EdvardSire/dds-fmu && \
  cd dds-fmu && \
  conan build . -o dds-fmu/*:with_doc=True -c tools.build:skip_test=False --build missing


# Use local dds-fmu changes
COPY dds-fmu /dds-fmu-build
RUN cd dds-fmu-build && \
  conan build . -o dds-fmu/*:with_doc=True -c tools.build:skip_test=False --build missing
