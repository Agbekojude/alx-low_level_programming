#include "main.h"

/**
 * _strlen - Checks the length of a string
 * @s: String to check
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
