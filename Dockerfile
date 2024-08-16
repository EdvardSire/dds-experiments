FROM ubuntu:24.04

RUN apt update && apt install -y \
  git


RUN apt install -y \
  doxygen \
  graphviz \
  imagemagick \
  python3 \
  python3-venv \
  software-properties-common \
  wget \
  libasio-dev \
  libtinyxml2-dev \
  clang-tidy \
  curl \
  grep

RUN apt install -y libgtest-dev

RUN apt install -y python3-setuptools
RUN wget https://bootstrap.pypa.io/get-pip.py && python3 get-pip.py --break-system-packages
RUN pip3 install --upgrade pip --break-system-packages
RUN pip3 install setuptools --break-system-packages
# RUN pip3 install setuptools==58.3.0 colcon-common-extensions colcon-mixin --break-system-packages
RUN apt install -y cmake
RUN pip3 install colcon-common-extensions colcon-mixin --break-system-packages
RUN pip3 install sphinx==3.0.3 \
  doc8==0.8.0 \
  sphinx_rtd_theme==0.4.3 \
  sphinxcontrib.spelling==5.0.0 \
  sphinxcontrib-imagehelper==1.1.1 \
  vcstool \
  GitPython \
  setuptools \
  gcovr==5 \
  --break-system-packages

RUN apt install -y qtbase5-dev
RUN apt install -y qtdeclarative5-dev
RUN apt install -y libqt5charts5-dev
RUN apt install -y qtquickcontrols2-5-dev
RUN apt install -y \
  build-essential
RUN apt install -y qml-module-qt*


RUN echo "deb http://ftp.de.debian.org/debian sid main" > /etc/apt/sources.list.d/sid.list
RUN apt-key adv --keyserver keyserver.ubuntu.com --recv-keys 0E98404D386FA1D9 6ED0E7B82643E131
RUN apt update && apt install -y libfastrtps-dev=2.14.3+ds-1



RUN mkdir -p /Fast-DDS-Monitor/src
RUN cd /Fast-DDS-Monitor && \
  wget https://raw.githubusercontent.com/eProsima/Fast-DDS-monitor/main/fastdds_monitor.repos && \
  vcs import src < fastdds_monitor.repos && \
  colcon build
