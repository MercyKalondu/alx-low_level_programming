#!/bin/bash
gcc -g -FPIC -Wall -Werror -pedantic *.c -shared -o liball.so
