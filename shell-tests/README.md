### Preparatory exercises for the simple shell project

#### Process ID

0. getppid

Write a program that prints the PID of the parent process. Run your program several times within the same shell. It should be the same. Does echo $$ print the same value? Why?

1. /proc/sys/kernel/pid_max
Write a shell script that prints the maximum value a process ID can be.

#### Arguments

0. av
Write a program that prints all the arguments, without using ac.

1. Read line
Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line.

#advanced: Write your own version of getline.

2. command line to av
Write a function that splits a string and returns an array of each word of the string.

#advanced: Write the function without strtok

#### Executing a program

3. Example only - execve

> The system call execve allows a process to execute another program (man 2 execve). Note that this system call does load the new program into the current process’ memory in place of the “previous” program: on success execve does not return to continue the rest of the “previous” program.

#### Creating processes

4. Example only - fork

> The system call fork (man 2 fork) creates a new child process, almost identical to the parent (the process that calls fork). Once fork successfully returns, two processes continue to run the same program, but with different stacks, datas and heaps.

#### Wait

5. Example only - wait

> The wait system call (man 2 wait) suspends execution of the calling process until one of its children terminates.

#### Fork + wait + execve

6. fork & wait & execve

> Write a program that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child.

#### Super simple shell

7. Shell

> Using everything we saw, write a first version of a super simple shell that can run commands with their full path, without any argument.

#### File information

8. Example only - stat

> The stat (man 2 stat) system call gets the status of a file. On success, zero is returned. On error, -1 is returned.
 
9. Find file in PATH

> Write a program that looks for files in the current PATH.

#### Environment

10. Example only - printenv

11. Example only - main prototypes

> So far we have seen that main could have different prototypes:

int main(void);
int main(int ac, char **av);
There is actually another prototype:

int main(int ac, char **av, char **env);
where env is a NULL terminated array of strings.

12. printenv with environ
Write a program that prints the environment using the global variable environ.

13. env vs environ
Write a program that prints the address of env (the third parameter of the main function) and environ (the global variable). Are they they same? Does this make sense?

14. getenv()
Write a function that gets an environment variable. (without using getenv)

Prototype: char *_getenv(const char *name);
man 3 getenv

15. PATH
Write a function that prints each directory contained in the the environment variable PATH, one directory per line.

16. PATH
Write a function that builds a linked list of the PATH directories.

17. setenv
Write a function that changes or adds an environment variable (without using setenv).

Prototype: int _setenv(const char *name, const char *value, int overwrite);
man 3 setenv

18. unsetenv
Write a function that deletes the variable name from the environment (without using unsetenv).

Prototype: int _unsetenv(const char *name);
man 3 unsetenv

#### System calls to know

- 'getpid'
- 'getppid'
- 'getline'
- 'strtok'
- 'execve'
- 'fork'
- 'wait'

