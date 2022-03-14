#include "main.h"

/**
 * _putchar - Writes character c to standard output.
 * @c: Character being printed.
 *
 * Return: 1 if success -1 if error. 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_c - Prints a character.
 * @arg: Variable argument list from _printf
 */
int print_c(va_list arg)
{
	_putchar(va_arg(arg, int));
	return(1);
}

/**
 * print_i - Prints an integer.
 * @arg: Variable argument list from _printf
 */
int print_i(va_list arg)
{
	int x = 0;

}

/**
 * print_s - Prints a string.
 * @arg: Variable argument list from _printf
 */

int print_s(va_list arg)
{
	int i = 0;
	char *str = va_arg(arg, char *);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}

	return (i);
}



