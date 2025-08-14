#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(void)
{
	/*
	 * Write a program that executes the command ls -l /tmp in 5 different child processes. 
	 * Each child should be created by the same process (the father). 
	 * Wait for a child to exit before creating a new child.
	 */

	pid_t parent_pid;
	pid_t child_pid;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int status;

	child_pid = fork();
	parent_pid = getpid();
	if (child_pid == -1)
		perror("Something went wrong!");
	if (child_pid == 0)
	{
		printf("Child - My pid: %u\n", parent_pid);
		execve(argv[0], argv, NULL);
	}
	else
	{
		wait(&status);
		printf("Parent %u of child  %u\n", parent_pid, child_pid);
	}
	return (0);
}
