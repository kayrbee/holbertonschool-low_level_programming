#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function of operator
 * Return: 0 
 */
int main(int argc, char **argv)
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	/* If integer returned, print result */

	/* If error returned, print error and exit with right code */
	return (0);
}

