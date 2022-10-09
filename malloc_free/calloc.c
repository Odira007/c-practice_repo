#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size);

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	char *a;

	a = _calloc(98, sizeof(char));
	strcpy(a, "Best");
	strcpy(a + 4, " School! :)\n");
	a[97] = '!';
	simple_print_buffer(a, 98);
	free(a);
	return (0);
}

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(size * nmemb);

	if (p == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
