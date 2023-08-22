#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
