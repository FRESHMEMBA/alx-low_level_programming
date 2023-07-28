#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * is_digits - Checks if a string consists of digits only.
 * @str: The string to be checked.
 * Return: 1 if str consists of digits only,
 * 0 otherwise.
 */
int is_digits(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]) == 0)
			return (0);
	}
	return (1);
}

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

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
			break;

		if (is_digits(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
