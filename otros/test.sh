#!/bin/bash
gcc -o myprogram mysource.o `sdl2-config --libs`
gcc -o myprogram mysource.o `sdl2-config --libs` -lSDL2_ttf
