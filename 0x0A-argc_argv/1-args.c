#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;

	return (0);
}
