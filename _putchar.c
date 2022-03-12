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
