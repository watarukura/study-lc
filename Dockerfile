FROM ubuntu:latest
RUN apt update && apt install -y gcc make git binutils libc6-dev vim
RUN mkdir -p /workspace
WORKDIR /workspace
