#include "main.h"

/**
 * _strlen_recursion - prints the string length
 * @s: source string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (1 + _srtlen_recursion(s + 1));
}

