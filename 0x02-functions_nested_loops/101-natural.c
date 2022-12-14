#include <stdio.h>
/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below.
  * Return: Nothing.
  */

int main(void)
{
	int i, result;
	int endPoint = 1024;

	for (i = 0; i < endPoint; i++)
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	printf("%d\n", result);
	return (0);
}
