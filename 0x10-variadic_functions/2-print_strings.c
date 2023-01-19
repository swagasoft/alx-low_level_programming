#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - Print numbers using a separator
 * @separator: The string separator
 * @n: The numbers
 * @...: The list
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *p;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		p = va_arg(strings, char *);
			printf("%s", (p == NULL) ? "(nil)" : p);
	}
	printf("\n");
	va_end(strings);
}
