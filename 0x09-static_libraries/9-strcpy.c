#include "main.h"
#include <string.h>
/**
*_strcpy - copies the string pointed to by src, including \0.
*@src: pointer.
*@dest: pointer.
*Return: the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
