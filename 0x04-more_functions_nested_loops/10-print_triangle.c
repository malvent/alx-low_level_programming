#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: length of sides minus hypotenuse
 *
 * Return: void
 */

void print_triangle(int size)
{
	int line = 0;
	int spaces;
	int hash;

	if (size > 0)
	{
		while (line < size)
		{
			for (spaces = size - 1; spaces > line; spaces--)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < line + 1; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

