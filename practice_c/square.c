#include <stdio.h>
/**
 * size - size of the square
 * Return: 0 always
 */
void print_square(int size);

int main(void)
{
	print_square(0);
	return (0);
}

void print_square(int size)
{
	int n;
	int i;
	
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
	for (n = 0; n < size; n++)
	{
		for (i = 0; i < size; i++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	}
}
