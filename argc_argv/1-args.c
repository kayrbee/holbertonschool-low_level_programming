#include "main.h"
#include <stdio.h>
/**
 * main - define a program that prints nr args passed
 * @argc: count number of arguments passed to main
 * @argv: value of arguments passed to main
 * Return: 0 if successful, !0 if failure
 */
int main(int argc, char **argv)
{
	if (*argv[0] != '\0')
	{
		printf("%d\n", (argc - 1));
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
