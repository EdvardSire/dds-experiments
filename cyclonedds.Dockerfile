FROM ros:jazzy-ros-base-noble

RUN apt update && apt install -y python3-pip \
  git

RUN git clone https://github.com/eclipse-cyclonedds/cyclonedds && \
  cd cyclonedds && mkdir build install && cd build && \
  cmake .. -DCMAKE_INSTALL_PREFIX=../install && \
  cmake --build . --config RelWithDebInfo --target install -j$(nproc) && \
  cd .. && \
  export CYCLONEDDS_HOME="$(pwd)/install" && \
  pip install git+https://github.com/eclipse-cyclonedds/cyclonedds-python --break-system-packages

ENV PATH="${PATH}:/cyclonedds/build/bin"
