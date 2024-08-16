#!/usr/bin/env bash

fmu_name='/dds-fmu-build/build/Release/fmus/dds-fmu-linux64-Release.fmu'
fmu_stem='sintef.fmu'
container_name='dds_fmu'
dockerfile_name='dds_fmu.Dockerfile'

docker build -t $container_name -f $dockerfile_name . && \
  docker run $container_name cat $fmu_name > $fmu_stem
  # docker run -it $container_name bash

