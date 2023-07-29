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
	int cents, count = 0;

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
			{
				count += cents / 25;
				cents %= 25;
			}
			else if (cents >= 10)
			{
				count += cents / 10;
				cents %= 10;
			}
			else if (cents >= 5)
			{
				count += cents / 5;
				cents %= 5;
			}
			else if (cents >= 2)
			{
				count += cents / 2;
				cents %= 2;
			}
			else
			{
				count++;
				cents--;
			}
		}
		printf("%d\n", count);
	}

	return (0);
}
