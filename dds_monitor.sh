#!/usr/bin/env bash
name='dds_monitor'
dockerfile_name='dds_monitor.Dockerfile'

docker build -t $name -f $dockerfile_name . && docker run \
  -v /dev/shm:/dev/shm \
  -v /tmp/.X11-unix:/tmp/.X11-unix \
  -e DISPLAY=$DISPLAY \
  -it $name

