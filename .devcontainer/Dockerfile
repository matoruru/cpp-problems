FROM python:3.8

RUN apt update && apt upgrade -y && \
    apt install -y gdb gnupg2 neovim fish

RUN pip install online-judge-tools

RUN echo "exec fish" >> ~/.bashrc

ENV PATH $PATH:/root/.local/bin