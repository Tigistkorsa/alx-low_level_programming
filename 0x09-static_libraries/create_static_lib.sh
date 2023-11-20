#!bin/bash
gcc -c *.cc
ar rc liball.a *.o
echo y | rm -I *.o
