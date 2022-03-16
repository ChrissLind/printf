#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * bprintf - Code for printf function.
 * @format: String being passed.
 * @args: Variable argument.
 */

void bprintf(const char *format, va_list args)
{
	int state = 0;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
			{
				state = 1;
			}
			else
			{
				_putchar(*format);
			}
		}
		else if (state == 1)
		{
			switch (*format)
			{
				case 'c':
					{
						char ch = va_arg(args, int);

						_putchar(ch);

						break;
					}
				case 's':
					{
						const char *s = va_arg(args, const char *);

						for (; *s != '\0'; s++)
						{
							_putchar(*s);
						}
						break;
					}
				case 'd':
					break;
				case 'i':
					break;
			}
			state = 0;
		}
		format++;
	}
}
