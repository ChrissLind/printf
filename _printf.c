#include "main.h"

int _printf(const char *format, ...)
{
	unsigned int i;
	va_list arg;
	char c;

	if (format == NULL)
		return(0);
	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		while(format[i] != '%')
		{
			_putchar(srt[i]);
			i++;
		}
		c = format[i++];

		if (c == '\0' || c == '%')
		{
			_putchar('%');
		}
	}
}
