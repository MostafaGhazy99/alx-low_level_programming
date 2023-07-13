#!/bin/bash

# Compile the .c files into .o object files
gcc -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

# Clean up the .o object files
rm *.o
