#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Start simple: 
 * - parse $PATH
 * - handle exactly 2 argv arguments
 */
int main(int argc, char **argv)
{
	char *str_path = getenv("PATH");
	char *token = strtok(str_path, ":");
	int i = 1;

	if (argc == 1)
	{
		printf("Wrong number of arguments\n");
		exit(1);
	}
	while (i < argc)
	{
		while (token != NULL)
		{
			if ((strcmp(argv[i], token) != 0))
			{
				printf("No match...try next token\n");
				token = strtok(NULL, ":");
			}
			else
			{
				printf("MATCH!\n");
				break;
			}
		}
		i++;
		printf("Moving to argv[%d]\n", i);
	}
	return (0);
}
