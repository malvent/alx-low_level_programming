#include "main.h"

/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analized string.
 *
 * Return: String with all words capitalized
 */

char *cap_string(char *s)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		j = i - 1;
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 32;
			else if (*(s + j) >= 9 && *(s + j) <= 10)
				*(s + i) -= 32;
			else if (*(s + j) >= 32 && *(s + j) <= 34)
				*(s + i) -= 32;
			else if (*(s + j) >= 40 && *(s + j) <= 41)
				*(s + i) -= 32;
			else if (*(s + j) == 46)
				*(s + i) -= 32;
			else if (*(s + j) == 59)
				*(s + i) -= 32;
			else if (*(s + j) == 123 || *(s + j) == 125)
				*(s + i) -= 32;
		}
	}
	return (s);
}

