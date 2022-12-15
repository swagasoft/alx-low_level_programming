#include "main.h"

/**
 * print_line - Draws a dash line using  _.
 *
 * @n: The number of _ characters to be printed.
 * Example :
 * print_line(5)  -->  _____
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
