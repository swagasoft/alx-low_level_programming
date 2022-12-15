#include "main.h"
/**
 * print_most_numbers - a function that prints numbers from 0-9
 *
 * Decription - break the loop if i == 2 or i == 4
 *
 * Return: 0-9, excluding 2 and 4, following by new line
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
