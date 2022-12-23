#include "main.h"

/**
 * string_toupper -  changes all lowercase letter
 * of a string to uppercase.
 *@n: cadena de caracteres.
 * Return: n.
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		n[i] = (int)n[i] - 32;
	}
	return (n);
}
