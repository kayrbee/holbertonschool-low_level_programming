#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - measures the length of a string
 * @s: string to measure
 * Return: length of string, not including null char end
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * str_concat - concatenates two given char arrays
 * @s1: string to be concatenated first, provided by main
 * @s2: string to be concatenated second, provided by main
 * Return: pointer to concatenated array, or NULL if failure occurs
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = _strlen(s1);
	int len_s2 = _strlen(s2);
	int total_len = len_s1 + len_s2 + 1;
	char *concat;
	int i = 0;
	int j = 0;

	concat = malloc(sizeof(char) * total_len);

	if (concat == NULL)
	{
		return (NULL);
	}
	while (i < total_len)
	{
		if (len_s1 == 0)
		{
			concat[i] = '\0';
			i++;
		}
		while (i < len_s1)
		{
			concat[i] = s1[i];
			i++;
		}
		if (len_s2 == 0)
		{
			concat[i] = '\0';
		}
		while (j < len_s2)
		{
			concat[i] = s2[j];
		}
	}
	return (concat);
}
