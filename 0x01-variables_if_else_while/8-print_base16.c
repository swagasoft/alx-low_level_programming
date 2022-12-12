#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print a-z in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char cha = 'z';

	while (cha >= 'a')
	{
		putchar(cha);
		--cha;
	}
	putchar('\n');

	return (0);
}
