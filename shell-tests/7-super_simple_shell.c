#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char **argv)
{
	char *line;
	size_t buffer_size = 0;
	ssize_t num_chars_read;
	int child;

	if (argc != 2)
	{
		printf("Error: wrong number of arguments\n");
		exit(1);
	}
	printf("$: ");
	num_chars_read = getline(&line, &buffer_size, stdin);

	child = fork();

	if (child == -1)
	{
		perror("Fork you\n");
		exit (1);
	}
	else if (child == 0)
	{
		printf("Child process calls execve\n");
//		execve(argv[0], NULL, NULL);
	}
	else
	{
		printf("Parent process does nothing\n");
		return (0);
	}
}
