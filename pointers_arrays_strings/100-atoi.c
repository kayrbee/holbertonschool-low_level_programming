#include "main.h"

/**
 * _atoi: convert a string array to an integer LITE
 * @s: string, passed from main
 * Return: integer including sign
 */
int _atoi(char *s)
{
	int element = 0;
	int final_integer = 0;
	int sign = 1;
	int count_sign = 0;
	int in_progress = 0;
	int eval_done = 0;

	while (s[element] != '\0')
	{
		if ((s[element] >= '0') && (s[element] <= '9') && (eval_done == 0))
		{
			in_progress = 1;
			final_integer = (final_integer * 10) + (s[element] - 48);
		}
		else
		{
			if (in_progress == 1)
			{
				eval_done = 1;
			}
		}
		
		if (s[element] == '-' && in_progress == 0)
		{
			count_sign++;
		}
	
		element++;
	}

	if (count_sign % 2 != 0)
	{
		sign = -1;
	}
	return ((final_integer * sign));
}

