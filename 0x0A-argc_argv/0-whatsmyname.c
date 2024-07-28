#include <stdio.h>

/**
 * main - Program that prints its name
 * @argc: Number of arguments passed
 * @argv: Argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
