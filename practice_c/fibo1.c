#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int seq = a + b;
	int n = 2;

	printf("%d, %d, ", a, b);
	while (n < 50)
	{
		a = b;
		b = seq;
		seq = a + b;
		n++;
		printf("%d", seq);
		if (n < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
