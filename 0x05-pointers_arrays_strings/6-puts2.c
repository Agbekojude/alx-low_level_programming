#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string
 *
 * Return: nothing 
 */

void put2(char *str)
{
	int i;

	i - 0;
	
	while (str [i] != '\0')
	{
		if (i % 2 ==0)
		{
			_putchar(str[i]);
		}
		i++
	}
	_putchat('\n');
}

