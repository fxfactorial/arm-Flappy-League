#ifndef FILEIO_H
#define FILEIO_H
#include <stdio.h>
#include <stdlib.h>

char *readFile(char *filename);
void addBytesToFile(char *filename, long int byteIndex, char *bytes,
        int numBytes);
long int appendBytes(char *filename, char *bytes, int numBytes);
#endif
