#include "main.h"

/**
 * _sqrt_recursion - return the natural sqrt of a number
 * @n: natural number
 *
 * Return: natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	else
		return (sqrt_man(n, 1));
}
/**
 * sqrt_man - calculates manualy the sqrt of a number
 * @n: natural number
 * @i: number to be multiplied
 *
 * Return: natural sqrt
 */

int sqrt_man(int n, int i)
{
	if (i * i == 0)
		return (i);

	else if (i * i > n)
		return (-1);

	else
		return (sqrt_man(n, i + 1));
}

