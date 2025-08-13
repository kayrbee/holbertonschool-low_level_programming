#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
//	immutable variable (read-only)
//	char *str = "Hello World";
//	mutable variable (compiler does memcpy)
	char str[] = "Hello World";
	const char *delimiter = " ";
	char *token = strtok(str, delimiter);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delimiter);
	}

	return (0);
}
