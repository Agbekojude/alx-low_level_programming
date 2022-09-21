#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 *
 * Return: VOid
 */

void rev_string(char *s)
{
	int l, i;

	char c;

	for (l = 0; s[l] != '\0'; l++)

		for (i = 0; i < l / 2; i++)
		{
			ch = s[l];
			s[l] = s[l - 1 - i];
			s[l - 1 - i] = c;
		}
	return (0);
}
