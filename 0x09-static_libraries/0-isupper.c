#include "main.h"

/**
*_isupper - A function that checks for uppercase character
*@c: single letter input
*Return: 1 if the function is true, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
