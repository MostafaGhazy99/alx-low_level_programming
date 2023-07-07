#!/bin/bash

# Compile each .c file into .o files
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

# Create the static library
ar rcs liball.a *.o

# Clean up by removing the .o files
rm *o
