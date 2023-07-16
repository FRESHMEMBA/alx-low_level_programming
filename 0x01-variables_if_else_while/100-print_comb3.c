#include <stdio.h>

/**
 * main - Prints all possible differenct combinations of two digits.
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 56 ; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
