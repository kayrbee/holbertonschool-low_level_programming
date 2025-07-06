#include "main.h"
#include <stdio.h>
/**
 * main - define a program that prints its own name
 * @argc: count number of arguments passed to main
 * @argv: value of arguments passed to main
 * Return: 0 if successful, !0 if failure
 */
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
