#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @i: The input number to check
 * Return: int.
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = i * (-1);
		return (i);
	}
	else
		return (i);
}
