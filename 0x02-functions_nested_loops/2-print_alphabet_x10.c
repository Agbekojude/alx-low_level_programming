#include "main.h"

/**
 * print_alphabet_x10 -Function That prints 10 times the alphabet in lowercase
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
