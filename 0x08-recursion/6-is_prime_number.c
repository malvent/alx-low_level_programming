#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number or not
 * @n: natural number
 *
 * Return: 1 if is prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else if (n == 2)
		return (1);

	else
		return (is_prime_man(n, 2));
}
/**
 * is_prime_man - calculates if number is prime
 * @n: natural number
 * @i: divisor of n
 *
 * Return: 1 if is prime otherwise 0
 */

int is_prime_man(int n, int i)
{
	if (n % i == 0)
		return (0);

	else if (i == (n - 1) && n % i != 0)
		return (1);

	else
		return (is_prime_man(n, i + 1));
}

