#include <stdio.h>

int maxNum(int num1, int num2)
{
	if (num1 > num2)
		printf("%d is greater than %d\n", num1, num2);
	else if (num2 > num1)
		printf("%d is less than %d\n", num1, num2);
	return (0);
}

int main(void)
{
	int a, b, maxNumber;

	a = 200;
	b = 100;
	maxNumber = maxNum(a, b);
	return (0);
}	
