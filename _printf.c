#include "main.h"
#include <stdarg.h>
#include <stdio.h>


int _printf(const char *format, ...)
{

	va_list args;
	va_start(args, format);

	bprintf(format, args);

	va_end(args);

	return (0);
}
