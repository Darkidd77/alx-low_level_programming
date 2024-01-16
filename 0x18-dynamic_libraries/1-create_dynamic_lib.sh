#!/bin/bash
gcc *.o -shared -o liball.so && gcc -o *.c -fpio
