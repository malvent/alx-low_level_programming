#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments in the program
 * @argc: argument count or size of arguments
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	int args = argc - 1;

	printf("%d\n", args);

	return (0);
}

