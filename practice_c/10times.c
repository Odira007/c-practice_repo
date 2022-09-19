#include <stdio.h>

int main(void)
{
	int n;
	int i;

	while (n <= '9')
	{
		for (i = 48; i < 58; i++)
		{
			putchar(i);
		}
		putchar('\n');
		n++;
	}
	return (0);
}
