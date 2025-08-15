#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
extern char **environ; //Captures external env vars

int main()
{
	char *line;		//Feeds getline buffer, stores user input
	size_t buffer_size = 0;	//Holds allocated size of getline buffer
	int child;		//Holds return value of fork

	child = fork();

	if (child == -1)
	{
		perror("Fork you\n");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
		printf("kayrbee_sh$: ");
		if (getline(&line, &buffer_size, stdin) == 1)
		{
			perror("getline failed\n");
			free(line);
			return (1);
		}
		line[strcspn(line, "\n")] = '\0'; //Trim trailing newline
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
