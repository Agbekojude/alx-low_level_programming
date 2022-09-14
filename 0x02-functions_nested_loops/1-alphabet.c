#include "main.h"

/**
 * print_alphabet - prints all the alphabets a-z
 * Return: always 0 success
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar((int) alpha);
		alpha++;
	}
	_putchar ((char) 10);
}
