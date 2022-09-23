#include "main.h"

/**
 * _strucpy - C function that copies a string
 * If the lenght of the source string is less than the maximum byte number
 * the remainder of thedestination string is filled with null bytes.
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of byte copied
 * Return: returns
 */

char *_strucpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
