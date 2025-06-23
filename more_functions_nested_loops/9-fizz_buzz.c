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
	int buzz = 5;
	int fizz = 3;
	int fizzbuzz = (fizz * buzz);

	printf("%d", start++);

	while (start <= stop)
	{
		int find_fizzbuzz = start % fizzbuzz;
		int find_buzz = start % buzz;
		int find_fizz = start % fizz;

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

