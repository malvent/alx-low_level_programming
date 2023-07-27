#include "main.h"

/**
 * reverse_array - reverses array
 * @a: array of integers
 * @n: number of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, left, right;

	left = 0;
	right = n - 1;
	while (left < right)
	{
		i = *(a + left);
		*(a + left) = *(a + right);
		*(a + right) = i;
		left++;
		right--;
	}
}

