#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - replace multiples of 3, 5 and (3*5) with text
 * Return: void
 */
void fizz_buzz(void)
{
	int start = 1;
	int stop = 100;
	int fizz = 3;

	printf("%d", start++);

	while (start <= stop)
	{
		int find_fizzbuzz = start % 15;
		int find_buzz = start % 5;
		int find_fizz = start % 3;

		if (find_fizzbuzz == 0)
		{
			printf(" FizzBuzz");
		}
		else if (find_buzz == 0)
		{
			printf(" Buzz");
		}
		else if (find_fizz == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", start);
		}
		start++;
	}
	putchar('\n');
}

