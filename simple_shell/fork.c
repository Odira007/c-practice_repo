#include "shell.h"

int main(int argc, char **argv)
{
	int pid = fork();
	printf("Child PID: %d\n, Parent PID: %d\n", getpid(), getppid());
	return (0);
}
