#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - define a program that multiplies 2 argv digits
 * @argc: count number of arguments passed to main
 * @argv: value of arguments passed to main
 * Return: 0 if successful, !0 if failure
 */
int main(int argc, char **argv)
{
	char *a;
	int converted_a;
	char *b;
	int converted_b;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = argv[1];
	converted_a = atoi(a);

	b = argv[2];
	converted_b = atoi(b);

	result = converted_a * converted_b;
	printf("%d\n", result);
	return (0);
}
