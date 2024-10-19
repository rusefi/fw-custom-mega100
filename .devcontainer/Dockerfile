# syntax=docker/dockerfile:1
# base image from ggrouv: https://github.com/ggurov/rusefibuildcontainer
FROM ubuntu:mantic
RUN apt-get -y update
RUN apt-get -y install make automake autoconf gcc-12-arm-linux-gnueabi gcc-12-arm-linux-gnueabi-base gcc-arm-none-eabi binutils-arm-none-eabi git nano openjdk-21-jdk-headless mtools dosfstools xxd
RUN apt-get -y install openssh-server cmake rsync gdb-multiarch build-essential
# used for remote non-devcontainer use ex: (https://blog.jetbrains.com/clion/2020/01/using-docker-with-clion/) [also on vscode: https://code.visualstudio.com/remote/advancedcontainers/develop-remote-host]
RUN useradd -m rusefi && yes password | passwd rusefi

CMD service ssh start && /bin/bash
