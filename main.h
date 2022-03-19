#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_s(char *s);
int print_c(char c);
int print_d(int n, int count);
int pickcase(char func, va_list args);
int mod_f(char mod[], char index);



#endif
