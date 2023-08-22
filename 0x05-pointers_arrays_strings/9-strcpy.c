#include "main.h"

/**
 * *_strcpy -  Write a function copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * @dest: char pointer
 * @src: Source
 * Return: Pointer to `dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
