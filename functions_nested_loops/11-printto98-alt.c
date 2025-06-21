#include <stdio.h>
#include "main.h" 

void print_to_98(int n);

/**
 * print_to_98 - print all numbers to 98
 * @n: starting number, passed from main
 * Return: void
 */

int main(void){
	print_to_98(0);
	return(0);
}

void print_to_98(int n)
{
	int stop_value = 98;
	int opp = 0;

	if (n  <= stop_value)
	{
		opp = 1;
	}
	printf("%d", n);

	while (n != stop_value){
		printf(", ");
		if (opp == 1)
		{
			n = n + 1;
		}
		else
		{
			n = n - 1;
		}
		printf("%d", n);
	}
	printf("\n");
}

