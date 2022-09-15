#include "main.h"

/**
 * print_alphabet_x10 - prints all the alphabets, a-z 10 times
 *
 * Return: always 0 Success
 */

void print_alphabet_x10(void)
{
	char alpha;
	int index;

	alpha = 'a';

	for (index = 0; index < 10; index++)
	{
	       	while (alpha <= 'z')
		{
			_putchar((int) alpha);
			alpha++;
		}
		
	}
	_putchar((char) 10);
}

