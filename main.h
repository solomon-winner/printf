#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#undef INT_MAX
#define INT_MAX 2147483647
#undef BUFFER_SIZE
#define BUFFER_SIZE 1024
#undef INT_MIN
#define INT_MIN (-INT_MAX - 1)

int _printf(const char *format, ...);
int p_s(char *ccr);
int _integer(int n);
int p_bin(unsigned int c);

#endif
