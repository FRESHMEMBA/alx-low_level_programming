#include <stdio.h>
#include <ctype.h>

/**
 * main - Multiplies adds positive numbers
 * @argc: The number of arguments passed to the program.
 * @argv: An array containing the program's arguments.
 * Return: 0 if zero or more arguments are passed to the program,
 * or 1 if at least one of the arguments is not a digit.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (argc == 1)
			break;

		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += argv[i];
	}
	
	printf("%d\n", sum);
	return (0);
}
