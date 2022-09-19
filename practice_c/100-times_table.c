#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int c;

	n = 0;
	for (i = 0; i < 15; i++)
	{
		while (n <= 14 && n >= 0)
		{
			c = 0;

			while (c <= 15 && c >= 0)
			{
				printf("%d,  \n", c * i);
				c++;
			}
			printf("%d, ", n * i);
			n++;
		}
	}
}
