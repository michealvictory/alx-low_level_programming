#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function to generate a randon number
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{ 
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d id negative\n", n);
	}
	return (0);
}	
