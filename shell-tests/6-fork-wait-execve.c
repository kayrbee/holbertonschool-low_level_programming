#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	int status, i = 0;

	while (i < 5)
	{
		if(fork() == 0)
		{
			printf("[child] pid %d from [parent] pid %d\n",getpid(),getppid());
			exit(0);
		}
		i++;
	}
	i = 0;
	while (i < 5)
	{
		wait(&status);
		i++;
	}
}
