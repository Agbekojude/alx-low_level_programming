#include "main.h"

/**
 * print_alphabet - Function thats prints the alphabet in lowercase
 *
 * Prototype: Void print_alphabet(void)
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}
