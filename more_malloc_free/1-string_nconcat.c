#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - measure the length of given string
 * @s: string to measure
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * string_nconcat - partially concat 2 strings
 * @s1: string 1 should be copied in entirety
 * @s2: string 2 should be partially appended to s1, where
 * @n: n is the number of characters to include from s2
 * Return: pointer to concat result or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len_s1 = _strlen(s1);
	unsigned int len_s2 = _strlen(s2);
	unsigned int i = 0;
	unsigned int j = 0;

	if (n > len_s2)
	{
		n = len_s2;
	}
	ptr = malloc(len_s1 + (n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < len_s1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';

	return (ptr);
}

