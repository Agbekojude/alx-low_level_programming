#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: generated password
 */

int main(void)
{
	char c;
	int n;

	srand(time(NULL));
	while (n <= 2645)
	{
		c = rand() % 128;
		n += c;
		putchar(c);	}
	putchar(2772 - n);

	return (0);

}
