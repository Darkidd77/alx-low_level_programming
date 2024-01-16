#!/bin/bash
gcc -c -fpio *.c
gcc -shared *.o -o liball.so
