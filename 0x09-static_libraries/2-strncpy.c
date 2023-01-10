#include "main.h"
#include<string.h>
/**
 * _strncpy -  function that copies a string..
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * @n: number.
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
