#!/bin/bash

# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library from the .o files
ar -rc liball.a *.o

# Index the symbols in the library
ranlib liball.a

# Clean up the .o files
rm *.o

