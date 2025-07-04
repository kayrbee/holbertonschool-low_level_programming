#include "main.h"

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
		max = max - 1;
	}

	if (max == 1)
	{
		return (1);
	}

	if (number % max == 0)
	{
		return (0);
	}

	return (prime_helper(number, max - 2));
}

