FROM ubuntu:24.04

RUN apt update && apt install -y \
  git \ 
  python3 \
  python3-pip \
  software-properties-common \
  wget \
  libasio-dev \
  libtinyxml2-dev \
  libssl-dev \
  libgtest-dev \
  cmake \
  build-essential \
  qtbase5-dev \
  qtdeclarative5-dev \
  libqt5charts5-dev \
  qtquickcontrols2-5-dev \
  qml-module-qt*

RUN pip3 install \
  colcon-common-extensions \
  vcstool \
  --break-system-packages

RUN echo "deb http://ftp.de.debian.org/debian sid main" > /etc/apt/sources.list.d/sid.list && \
  apt-key adv --keyserver keyserver.ubuntu.com --recv-keys 0E98404D386FA1D9 6ED0E7B82643E131 && \
  apt update && apt install -y libfastrtps-dev=2.14.3+ds-1

RUN mkdir -p /Fast-DDS-Monitor/src && \
  cd /Fast-DDS-Monitor && \
  wget https://raw.githubusercontent.com/eProsima/Fast-DDS-monitor/main/fastdds_monitor.repos && \
  vcs import src < fastdds_monitor.repos && \
  colcon build
