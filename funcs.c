#include "main.h"

/**
 * print_s - Prints a string.
 * @s: String being printed.
 * Return: Number of characters printed.
 */
int print_s(char *s)
{
	int i;

	if (s == NULL)
		s = "(nil)";

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * print_c - Prints a character.
 * @c: Character.
 * Return: 1
 */
int print_c(char c)
{
	_putchar(c);
	return (1);
}

/**
 * print_d - Prints a number.
 * @n: Number being printed.
 * @count: Count to keep track of numbers printed.
 * Return: Count
 */
int print_d(int n, int count)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = (n * -1);
	}

	else
		num = n;

	if (num / 10)
	{
		count = print_d(num / 10, count);
	}

	_putchar(num % 10 + '0');
	count++;
	return (count);
}
