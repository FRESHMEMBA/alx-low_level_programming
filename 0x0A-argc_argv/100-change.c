#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: The number of arguments passed to the program.
 * @argv: An array containing the program's arguments.
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int cents, divisor = 1, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		while (cents >= 1)
		{
			if (cents >= 25)
				divisor = 25;
			else if (cents >= 10)
				divisor = 10;
			else if (cents >= 5)
				divisor = 5;
			else if (cents >= 2)
				divisor = 2;
			else
			{
				count++;
				cents--;
				break;
			}
			count += cents / divisor;
			cents %= divisor;
		}
		printf("%d\n", count);
	}
	return (0);
}
