#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long int prime = 612852475143;
	long int quot = prime;
	long int divisor = 2;

	while (quot != divisor)
	{
		if (quot % divisor == 0)
		{
			quot = quot / divisor;
		}
		else
		{
			divisor++;
		}
	}

	printf("%li\n", quot);

	return (0);
}

