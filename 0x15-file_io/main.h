#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
#endif