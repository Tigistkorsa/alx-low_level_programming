#!/bin/bash
gcc -c *.c
ar -rcs:wq liball.a *.o
