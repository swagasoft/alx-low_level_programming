#include"stdio.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char word[] = "_putchar";

	for (int chr = 0; chr < 8; chr++)
		putchar(word[chr]);
	putchar('\n');

	return (0);
}
