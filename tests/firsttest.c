#include "main.h"
#include <stdarg.h>
#include <stdio.h>

void bprintf(const char *format, va_list args)
{
	int state = 0;
	while (*format)
	{
	if (state == 0)
	{
		if(*format == '%')
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

int _printf(const char *format, ...)
{

	va_list args;
	va_start(args, format);

	bprintf(format, args);

	va_end(args);
}

int main()
{

	_printf("print a char %c \n", 'H');
	_printf("print a string %s \n", "hello world");
	_printf("print an integer %d \n", 10);
	_printf("print a decimal %d \n", 12);

	return (0);

}

