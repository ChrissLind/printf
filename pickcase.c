#include "main.h"

/**
 * pickcase - Function that chooses which case we will use to print.
 * @func: Function modifier after "%"
 * @args: Variable argument from _printf function
 * Return: Length of what is being printed.
 */

int pickcase(char func, va_list args)
{
	switch (func)
	{
		case 's':
			return (print_s(va_arg(args, char *)));

		case 'c':
			return (print_c(va_arg(args, int)));

		case 'i':

		case 'd':
			return (print_d((va_arg(args, int)), 0));
	}
	va_end(args);
	return (0);
}

/**
 * mod_f - Looks for character match.
 * @mod: Array for modifiers.
 * @index: Comparison character.
 * Return: 1 if there is a match.
 */

int mod_f(char mod[], char index)
{
	int i;

	for (i = 0; mod[i] != '\0'; i++)
	{
		if (mod[i] == index)
			return (1);
	}
	return (0);
}


