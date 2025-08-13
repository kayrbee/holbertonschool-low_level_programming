#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(argc, **argv)
{
	char *str;
	const char *delimiter;
	/* To do
	 * implement logic to fetch and parse a string from argv
	 * */
	char *token = strtok(str, delimiter);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delimiter);
	}

	return (0);
}
