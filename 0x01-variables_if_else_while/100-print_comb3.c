#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: 0 - Success
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (j == 57 && i == 56)
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
