#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Start simple: parse $PATH
 */
extern char **environ;
int main()
{
	char *str_path = getenv("PATH");
	char *token = strtok(str_path, ":");

	while (token != NULL) //Parse whole string
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	}
	return (0);
}
