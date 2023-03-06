#!/bin/bash

# Exit on failure.
set -e

cppFile=$1
problemFolder=$2

cd "$problemFolder"
g++ --std=c++17 -g "$cppFile" -o a.out
oj test -c ./a.out -d ./test/