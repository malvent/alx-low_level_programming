#include <stdio.h>
#include <stdlib.h>

/**
 * main - print product of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int mult;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", mult);
		return (0);
	}
}
