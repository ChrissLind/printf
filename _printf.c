#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Code for printf function.
 * @format: String being passed.
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;
	char mod[5] = {'c', 's', 'i', 'd', '\0'};

	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (mod_f(mod, format[i + 1]))
			{
				count += pickcase(format[i + 1], args);
				i++;
			}
			else if (format[i] == '%' && format[i + 1] == '%')
			{
				count += _putchar('%');
				i++;
			}
			else
			{
				count += _putchar('%');
			}
		}

		else
		{
			count += (_putchar(format[i]));
		}
	}
	va_end(args);
	return (count);
}
