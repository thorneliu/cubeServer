# Cube-server

This repository is forked from core/cube of the  [PaddlePaddle/Serving](https://github.com/PaddlePaddle/Serving), which could be deployed as the online parameter server of embedding variables in large-scale recommendation systems.

## Main features

Two [brpc](https://brpc.apache.org/) services are exposed in a cube server:
- control  - embedding varialbes load/update/switchover,etc.
- seek - the embeeding values query servcie

In this repo, the oringal code was changed to support:
- more modern c++ coding style
- bettter performace metric on embedding variable look-up

## Installation

To build the cube from source, please install the latest `brpc` on your system. Basically this application could be built with the following commond:
```bash
mkdir build
cd build
cmake ../
make -j8
```

## Reference
- [brpc](https://brpc.apache.org/)
- [paddlepaddle](https://www.paddlepaddle.org.cn/)