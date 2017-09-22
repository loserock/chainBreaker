md build
md build\win64
clang++ --std=c++14 -Wall -pthread -O3 -Iinclude -Llib\x64 -v -lSDL2main -lSDL2 -o build\win64\chainBreaker.exe main.cpp render_window.cpp
copy lib\x64\SDL2.dll build\win64\SDL2.dll
