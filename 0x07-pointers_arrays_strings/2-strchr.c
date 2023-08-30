#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: String to check
 * @c: Character to check for
 *
 * Return: Pointer to spot in s with c or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
