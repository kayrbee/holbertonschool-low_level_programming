#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t parent_of_my_pid;

    parent_of_my_pid = getppid();
    printf("%u\n", parent_of_my_pid);
    return (0);
}

