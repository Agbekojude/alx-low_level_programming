#include <unistd.h>

/**
 * _putchar - writethe character c to stdout
 * @c: the character to print 
 *
 * Return: on success 1.
 * on error, -1 is returned and more is set apprpriately
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
