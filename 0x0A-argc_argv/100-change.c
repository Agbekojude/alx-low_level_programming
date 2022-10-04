#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints minimum number of coins to make change for an amount of money.
 * @args: the parameter entry
 * @argv: the argument vector
 *
 * Return: Always 0 if no error, else 1
 */

int main(int args, char *argv[])
{
	int a, b = 0, i, t;
	int c[5] = {25, 10, 5, 2, 1};

	if (args != 2)

	{
		puts("Error");
		return (1);
	}

	a = atoi(argv[i]);

	if (a <= 0)

	{
		puts("0");
		return (1);
	}

	else

	{
		for (i = 0; i < 5; i++)

		{
			t = a / c[i];
			a -= t * c[i];
			b += t;
			if (a == 0)
				break;

		}
	}
	printf("%d\n", b);
	return (0);
}
