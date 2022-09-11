#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	Printf("size of a char: %ld byte(s)\n",(unsigned long) sizeof(a));
	printf("Size of an int: %ld byte(s)\n", (unsigned long) sizeof (b));
	Printf("size of a long int: %ld byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n",(unsigned long) sizeof(d));
	printf("Size of a float: %ld byte(s)\n", (unsigned long) sizeof(e));

	return (0);
}
