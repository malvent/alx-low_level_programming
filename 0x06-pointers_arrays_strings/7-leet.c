#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: analized string
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i;
	int j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = n[j];
			}
		}
	}
	return (s);
}

