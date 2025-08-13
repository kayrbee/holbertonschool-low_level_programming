#include <stdio.h>

void main()
{
	char *command;

	printf("$ ");
	command = getline();
	printf("%s\n", command);
}
