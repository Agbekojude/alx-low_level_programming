#include <stdio.h>

/**
 * main - prints single digit numbers of base 10
 *
 * Return: 0 - Success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
