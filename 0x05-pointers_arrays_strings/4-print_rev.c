#include "main.h"
/**
 * print_rev - prints reversed str, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s)
{
int index = 0;
while (s[index])
	index++;

while (index--)
{
	_putchar(s[index]);
}
_putchar('\n');

}
