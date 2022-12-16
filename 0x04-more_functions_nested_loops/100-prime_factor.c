#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: (0) Success
 */

int main(void)
{
	long int num, prime;

	num = 612852475143;
	for (prime = 2; prime <= num; prime++)
	{
		if (num % prime == 0)
		{
			num /= prime;
			prime--;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
