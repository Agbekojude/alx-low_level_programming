#include "main.h"

/**
 * *_strcat - Write a function that concatenates two strings
 * @src: Source string to append to @dest
 * @dest: Destiation string to be concatenated upon
 * Return: Pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
