#include <stdio.h>
#include "main.h" 

/**
 * print_to_98 - print all numbers to 98
 * @n: starting number, passed from main
 * Return: void
 */
void print_to_98(int n)
{
	int start_value = n;
	int stop_value = 98;
	int print_length;

	if (start_value <= stop_value)
	{
		print_length = ((stop_value - start_value) + 1);

		while (start_value <= stop_value)
		{
			if (start_value == stop_value)
			{
				printf("%d\n", start_value);
			}
			else
			{
				printf("%d, ", start_value);
			}
			start_value = start_value + 1;
		}
	}
	else
	{
		print_length = (start_value - stop_value);

		while (start_value >= stop_value)
		{
			if (start_value == stop_value)
			{
				printf("%d\n", start_value);
			}
			else
			{
				printf("%d, ", start_value);
			}
			start_value = start_value - 1;
		}
	}
}

