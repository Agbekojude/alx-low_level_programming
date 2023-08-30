#include "main.h"

/**
 * _memcpy - Function that copies a memory area
 * @dest: Memory area to be copied to
 * @src: Memory area to be copied from
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
