#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of chars and
 *                initializes it with a specific char
 * @size: The size of the array
 * @c: The specific char to intialize
 *
 * Return: If size == 0 or the function fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
