#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
extern char **environ;

int main()
{
	char *line;
	size_t buffer_size = 0;
	ssize_t num_chars_read;
	int child;

	child = fork();

	if (child == -1)
	{
		perror("Fork you\n");
		exit (1);
	}
	else if (child == 0)
	{
		printf("$: ");
		num_chars_read = getline(&line, &buffer_size, stdin);
		printf("Echoing...\n%s", line);
		line[strcspn(line, "\n")] = '\0'; // trim trailing newline
		char *argv[] = {line, NULL};
		if (execve(argv[0], argv, environ) == -1)
		{
			perror("execve failed");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		printf("Parent process waits patiently...\n");
		wait(NULL);
		printf("Parent process finished! Goodbye ~\n");
		return (0);
	}
}
