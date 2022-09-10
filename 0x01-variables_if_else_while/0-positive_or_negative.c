#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - check if positive, zero or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	srand (time (0));
	n = rand ()_RAND_MAX /2
	if (n > 0)
	{
		prinf("%d is positive\n",n);
	}
	else if (n == 0)
	{
		prinf("%d is zero\n",n);
	}
	else
	{
		printf("%d is negative\n",n);
	}
	Return (0);
}
