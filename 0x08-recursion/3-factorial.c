#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 * @n: the given number
 *
 * Return: If n > 0 - the factorial of n.
 *         If n < 0 - 1 indicate an error.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
