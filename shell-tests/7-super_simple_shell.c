#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
extern char **environ; // captures external env vars

int main()
{
	char *line;		//Feeds getline buffer, stores user input
	size_t buffer_size = 0;	//Holds allocated size of getline buffer
	int child;

	child = fork();

	if (child == -1)
	{
		perror("Fork you\n");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
		printf("$: ");
		getline(&line, &buffer_size, stdin);
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
		wait(NULL);
		return (0);
	}
}
