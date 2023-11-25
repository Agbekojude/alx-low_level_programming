#include "main.h"

/**
 * get_bit - Function that returns the value of a
 *		bit at a given index
 * @n: Bit value
 * @index: index of the bit
 *
 * Return: Value of the bit, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
