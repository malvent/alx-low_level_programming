#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts the number of words in the string
 * @str: source string
 *
 * Return: the number of words
 */

int count_words(char *str)
{
	int words = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			if (*(str + 1) == ' ' || *(str + 1) == '\0')
				words++;
			str++;
		}
		else
			str++;
	}
	return (words);
}

/**
 * count_chars - counts the number of characters in a string
 * @str: source string
 *
 * Return: the number of wcharacters
 */

int count_chars(char *str)
{
	int chars = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			if (*(str + 1) != ' ' || *(str + 1) != '\0')
				chars++;
			str++;
		}
		else
			break;
	}
	return (chars);
}

/**
 * strtow - separates the character to an string of words
 * @str: source string
 *
 * Return: the pointer to the new array of words
 */

char **strtow(char *str)
{
	int num_words = count_words(str), num_chars = count_chars(str), i, j;
	char **words;

	i = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	if (num_words == 0)
		return (NULL);
	words = (char **) malloc(num_words * sizeof(char) + 1);
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}
	while (i < num_words)
	{
		if (*str == ' ')
			str++;
		else
		{
			words[i] = (char *) malloc(num_chars * sizeof(char) + 1);
			if (words[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (j = 0; j < num_chars; j++)
			{
				*(*(words + i) + j) = *str;
				str++;
			}
			*(*(words + i) + j) = '\0';
			i++;
		}
	}
	*(words + num_words) = NULL;
	return (words);
}

