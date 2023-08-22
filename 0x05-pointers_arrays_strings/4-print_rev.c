#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The used string reference pointer
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
