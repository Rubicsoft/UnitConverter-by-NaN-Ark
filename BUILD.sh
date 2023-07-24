# /data/data/com.termux/files/usr/bin/bash

CC=clang
CFLAGS -O3 \
		   -Wall \
		   -Wextra \
		   -std=c99

SRCS=*.c

OUTPUT=unicov

BIN_PATH=/data/data/com.termux/files/home/bin/$OUTPUT

# Compiling
$CC $CFLAGS -o $BIN_PATH $SRCS
