#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void main(int ac, char **av)
{
	int i = 0;

	while (av[i] != NULL)
	{	
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
}
