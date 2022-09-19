#include <stdio.h>

/**
 * scan - practice the scanf funnction
 */
int main(void)
{
	char f, m, l;

	printf("Enter your initials: ");
	scanf("%c %c %c", &f, &m, &l);
	printf("These are my initials: %c.%c.%c\n", f, m, l);
}

	
