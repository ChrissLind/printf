#include "main.h"
#include <stdarg.h>
#include <stdio.h>

void bprintf(const char *format, va_list args)
{
}

int _printf(const char *format, ...)
{

	va_list args;
	va_start(args, format);

	bprintf(format, args);

	va_end(args);
}

int main()
{

	_printf("print a char %c");
}
