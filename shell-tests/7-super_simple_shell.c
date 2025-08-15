#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc, char **argv)
{
	char *line;
	size_t buffer_size = 0;
	ssize_t num_chars_read;
	int child;

	/* To do: put this logic in the right place
	 * Expected:
	 *   argv is provided within the super simple shell
	 * Actual:
	 *   argv is provided within main */
	if (argc != 1)
	{
		printf("Error: wrong number of arguments\n");
		exit(1);
	}

	child = fork();

	if (child == -1)
	{
		perror("Fork you\n");
		exit (1);
	}
	else if (child == 0)
	{
		printf("Child process calls execve\n");
		printf("$: ");
		num_chars_read = getline(&line, &buffer_size, stdin);
		printf("Echoing...\n%s\n", line);
//		execve(argv[0], NULL, NULL);
	}
	else
	{
		printf("Parent process waits patiently\n");
		wait(NULL);
		return (0);
	}
}
