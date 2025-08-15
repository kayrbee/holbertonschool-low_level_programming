#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Start simple: 
 * - parse $PATH
 * - handle exactly 2 argv arguments
 * - assume that argv[1] is the first path in $PATH
 */
int main(int argc, char **argv)
{
	char *str_path = getenv("PATH");
	char *token = strtok(str_path, ":");

	if (argc > 2)
	{
		perror("Ill-equipped for this, try again later\n");
		exit(1);
	}
	while (token != NULL)
	{
		if ((strcmp(argv[1], token) != 0))
		{
			printf("No match...try next\n");
			token = strtok(NULL, ":");
		}
		else
		{
			printf("MATCH!\n");
			exit(0);
		}
	}
	return (0);
}
