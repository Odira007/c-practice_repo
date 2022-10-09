#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);

int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}

int stringlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *_strdup(char *str)
{
	char *p;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = stringlen(str) + 1;

	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
