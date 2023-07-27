#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination char
 * @src: source char
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n = 0;

	while (dest[n] != '\0')
		n++;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[n] = src[i];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}

