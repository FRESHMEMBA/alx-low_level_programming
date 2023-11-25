#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two numbers
 * @argc: The number of arguments passed to the program.
 * @argv: An array containing the program's arguments.
 * Return: 0 if two arguments are passed to thw program,
 * 1 otherwise.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
