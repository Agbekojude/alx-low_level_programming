#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it
 * @args: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0
 */

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void) argv;

	return (0);

