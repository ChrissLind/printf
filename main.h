#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
void bprintf(const char *format, va_list args);
int _printf(const char *format, ...);
#endif
