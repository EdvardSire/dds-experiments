#!/usr/bin/env bash
name="dds_monitor"
docker build -t $name . && docker run \
  -v /dev/shm:/dev/shm \
  -v /tmp/.X11-unix:/tmp/.X11-unix \
  -e DISPLAY=$DISPLAY \
  -it $name

