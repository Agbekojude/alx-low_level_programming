#include "main.h"

/**
 * rev_string - Prints a reverse a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int l, i;

	char ch;

	for (l = 0; s[l] != '\0'; l++)

		for (i = 0; i < l / 2; i++)
		{
			ch = s[l];
			s[l] = s[l - 1 - i];
			s[l - 1 - i] = ch;
		}
}
