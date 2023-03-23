#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -FPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$lD_LIBRARY_PATH
