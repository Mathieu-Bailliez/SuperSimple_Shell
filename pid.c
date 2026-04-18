#include <stdio.h>
#include <unistd.h> /* pour getpid() et getppid() */

/**
  * main - affiche le PID et le PPID du processus actuel
  *
  * Return: Always 0.
  */

int main(void)
{
	pid_t my_pid;
	pid_t my_ppid;

	my_pid = getpid(); /* récupére mon propre PID */
	my_ppid = getppid(); /* récupére le PID de mon parent */

	printf("Mon PID : %u\n", my_pid);
	printf("Mon PPID : %u\n", my_ppid);

	return (0);
}
