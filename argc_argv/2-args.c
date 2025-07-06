#include "main.h"
#include <stdio.h>
/**
 * main - define a program that prints the args it receives
 * @argc: count number of arguments passed to main
 * @argv: value of arguments passed to main
 * Return: 0 if successful, !0 if failure
 */
int main(int argc, char **argv)
{
	int position;

	for (position = 0; position < argc; position++)
	{
		printf("%s\n", argv[position]);
	}
	return (0);
}
