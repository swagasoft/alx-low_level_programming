#include "main.h"
/**
 * print_alphabet - entry point
 * Description - prints all alphabet, in lowercase, followed by a new line
 * Return
 */
void print_alphabet(void)
{
	char chr;

	chr = 'a';

	while (chr <= 'z')
	{
		_putchar(chr);
		chr++;
	}

	_putchar('\n');
}
