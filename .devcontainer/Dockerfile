FROM python:3.8

RUN apt update && apt upgrade -y && \
    apt install -y gdb gnupg2 neovim fish npm

RUN pip install online-judge-tools

RUN npm i -g atcoder-cli

RUN echo "exec fish" >> ~/.bashrc

ENV PATH $PATH:/root/.local/bin