#include <stdio.h>

/**
 * main - replace multiples of 3, 5 and (3*5) with text
 * Return: 0 if successful
 */
int main(void)
{
	int start = 1;
	int stop = 100;
	int buzz = 5;
	int fizz = 3;
	int fizzbuzz = (fizz * buzz);

	while (start <= stop)
	{
		if (start != 1)
		{
			printf(" ");
		}
		if ((start % fizzbuzz) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((start % buzz) == 0)
		{
			printf("Buzz");
		}
		else if ((start % fizz) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", start);
		}
		start++;
	}
	putchar('\n');
	return (0);
}

