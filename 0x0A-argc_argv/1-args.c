#include <stdio.h>

/**
 * main - Program that prints number of arguments passed to it
 * @argc: Number of arguments passed
 * @argv: Argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
