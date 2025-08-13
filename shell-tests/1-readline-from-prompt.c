#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *command;
	size_t buffer_size = 0;
	ssize_t num_chars_read;

	printf("$ ");
	num_chars_read = getline(&command, &buffer_size, stdin);
	if (num_chars_read != -1)
		printf("%s", command);
	else
		printf("Error");
	free(command);

	return (0);
}
