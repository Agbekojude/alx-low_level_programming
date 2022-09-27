#include "main.h"

/**
 * _strchr - string character
 * @s: string given
 * @c: another character
 * Return: pointer to spot s with cor null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s +i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) ==c)
		reuturn (s + i);

	return (0);
}
