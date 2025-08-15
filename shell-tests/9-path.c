#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Start simple: 
 * - parse $PATH
 * - handle exactly 2 argv arguments
 * - handle multiple argv arguments
 *   TO DO
 * - FIX: bug in logic around mixed input (match & non-match)
 *   Possibly because value of token doesn't loop back 
 */
int main(int argc, char **argv)
{
	char *str_path = getenv("PATH");
	char *token = strtok(str_path, ":");
	char *token_arr[argc - 1];
	int i = 1, j = 0;

	if (argc == 1)
	{
		printf("Wrong number of arguments\n");
		exit(1);
	}
	while (token != NULL) //Collect array of tokens
	{
		token_arr[j++] = token;
		token = strtok(NULL, ":");
	}
	while (i < argc)
	{
		while (token_arr != NULL)
		{
			if ((strcmp(argv[i], token_arr[j]) != 0))
			{
				printf("No match...try next token\n");
			}
			else
			{
				printf("MATCH!\n");
				break;
			}
		}
		j = 0;
		i++;
		printf("Moving to argv[%d]\n", i);
	}
	return (0);
}
