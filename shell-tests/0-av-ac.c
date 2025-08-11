#include <stdio.h>
#include <stdarg.h>

void main(int ac, char **av)
{
	int i = 0;

	for (i = 0; i < ac; i++)
	{	
		printf("%s", av[i]);
		if (ac - i > 1)
			printf(" ");
	}
	printf("\n");
}
