#! /bin/sh
mkdir build
mkdir build/lin64
clang++ -std=c++14 -Wall -pthread -O3 -Iinclude -Llib/x64 -v -lSDL2main -lSDL2 -o build/lin64/chainBreaker main.cpp render_window.cpp
