FROM python:3.8

RUN apt update && apt upgrade -y && \
    apt install -y gdb gnupg2

RUN pip install online-judge-tools

ENV PATH $PATH:/root/.local/bin