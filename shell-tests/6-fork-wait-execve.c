#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	int status, i = 0;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	while (i < 5)
	{
		if(fork() == 0)
		{
			printf("child %d of parent %d\n", getpid(), getppid());
			execve(argv[0], argv, NULL);
			exit(0);
		}
		wait(&status);
		printf("%d\n", i);
		i++;
	}
	i = 0;
/*	while (i < 5)
	{
		wait(&status);
		i++;
	} */
}
