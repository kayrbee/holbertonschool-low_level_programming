#include "main.h"

/**
 *  _sqrt_recursion - calculates the square root
 *  @n: number to be evaluated
 *  Return: integer of natural sqrt, or -1 if no natural sqrt
 */
int _sqrt_recursion(int n)
{
	int number = n;
	int root = 1;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (helper(number, root));
	}
}
/**
 * helper - recursively checks whether root * root matches target
 * @number: number passed from _sqrt_recursion
 * @root: integer to be squared and compared
 * Return: integer for matched root, or -1 if no match found
 */
int helper(int number, int root)
{
	if ((root * root) == number)
	{
		return (root);
	}
	else if ((root * root) > number)
	{
		return (-1);
	}
	else
	{
		return (helper(number, root + 1));
	}
}

