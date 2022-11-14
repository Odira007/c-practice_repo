#include "shell.h"

/**
 * _getline - prints $ on the terminal and waits for the user
 * to type a command
 *
 * Return: number of charcters read
 */
void _getline(void)
{
	char *lineptr = NULL;
	size_t len = 10;
	ssize_t readline;

	printf("$ ");
	readline = getline(&lineptr, &len, stdin);

	free(lineptr);
}
