#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Return: 0
 */
int main(void)
{
	int i = 48;
	int j;
	int cal = 44;
	int sp = 32;

	for (; i <= 57; i++)
	{
		j = i + 1;
		for (; j <= 57; j++)
		{
			putchar (i);
			putchar (j);
			if (i != 56 || (i == 56 && j != 57))
			{
				putchar (cal);
				putchar (sp);
			}
		}
	}
	putchar ('\n');
	return (0);
}
