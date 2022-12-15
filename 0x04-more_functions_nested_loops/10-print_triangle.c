#include"main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = 1; j <= size; ++j)
			{
				if ((i + j) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
