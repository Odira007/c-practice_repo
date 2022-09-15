#include <stdlib.h>
#include <stdio.h>

/**
 * main - create jack bauer's mins and hours
 *
 * Description: write a program that prints all the hours and minutes of jack bauer's day from 00:00 to 23:59;
 *
 * Return: 0
 */
int main(void)
{
	int mins = 0;
	int hours = 0;

	while (mins <= 59 && hours <= 23)
	{
		printf("%02d:%02d\n", hours, mins);
		mins++;
		hours++;
	}
	return (0);
}

