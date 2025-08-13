#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *file;
	char *command;
	size_t buffer_size = 0;
	ssize_t num_chars_read;

	file = fopen("my_file.txt", "r");
	if (file == NULL)
	{
		printf("Error opening file\n");
		return (1);
	}

	printf("MY_FILE CONTENTS\n");
	while ((num_chars_read = getline(&command, &buffer_size, file)) != -1)
		printf("%s", command);
	free(command);
	fclose(file);
	
	return (0);
}
