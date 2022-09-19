#include "main.h"

/**
 * _strlen - return the lenght of string 
 * @s: String
 * Return: returns lenght as string
 */

int _strlen(char *s)
{
	int len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
