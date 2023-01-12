#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - 
* @b: bytes
* Return:pointer
*/

void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
		if (i == NULL)
		exit(98);
		else
	return (i);
}
