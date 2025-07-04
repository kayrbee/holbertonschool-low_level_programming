#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks if given number is prime
 *  @n: number passed from main to be checked for prime
 *  Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	int number = n;
	int max = ((n - 1) / 2);
	
	if (number == 2)
	{
		return (1);
	}

	if (number % 2 == 0 || number < 0 || number == 1)
	{
		return (0);
	}

	return (prime_helper(number, max));
}
/**
 * prime_helper - uses recursion to determine if number is prime
 * @number: number to check, passed from is_prime_number
 * @max: maximum possible number that n could be divisible by
 *       nb: max is rounded down to the nearest odd
 * Return: 1 if prime, 0 if not prime
 */
int prime_helper(int number, int max)
{
	if (max % 2 == 0)
	{
		max = (max - 1);
	}

	if ((number % max) == 0)
	{
		return (0);
	}
	else if (max == 1)
	{
		return (1);
	}
	if (max > 1)
	{
		return (prime_helper(number, max - 2));
	}

}

int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("1: %d\n", r);
    r = is_prime_number(1024);
    printf("1024: %d\n", r);
    r = is_prime_number(16);
    printf("16: %d\n", r);
    r = is_prime_number(17);
    printf("17: %d\n", r);
    r = is_prime_number(25);
    printf("25: %d\n", r);
    r = is_prime_number(-1);
    printf("-1: %d\n", r);
    r = is_prime_number(113);
    printf("113: %d\n", r);
    r = is_prime_number(7919);
    printf("7919:%d\n", r);
    printf("Known failures: 103, -7, 104729\n");
    r = is_prime_number(103);
    printf("103: %d\n", r);
    r = is_prime_number(-7);
    printf("-7: %d\n", r);
    r = is_prime_number(104729);
    printf("104729: %d\n", r);

    return (0);
}

