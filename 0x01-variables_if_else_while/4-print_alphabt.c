#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
	}

	putchar('\n');

	return (0);
}
