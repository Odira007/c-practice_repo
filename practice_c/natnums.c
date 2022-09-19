#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sum;
	int n;

	sum = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
