#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that adds positive numbers
 * @argc: argument to count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, b, sum = 0;

		for (i = 1; i < argc; i++)
		{
			for (b = 0; argv[i][b] != '\0'; b++)
			{
				if (argv[i][b] < '0' || argv[i][b] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

		sum += atoi(argv[i]);
		}

	printf("%d\n", sum);

	return (0);
}
