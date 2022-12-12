#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		++num;
	}
	printf("\n");

	return (0);
}
