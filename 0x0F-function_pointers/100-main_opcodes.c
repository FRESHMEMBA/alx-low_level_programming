#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints its own opcodes.
 * @argc: The number of atguments passed to the program
 * @argv: An array containing the program's arguments.
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	int (*ptr)(int, char **) = &main;
	char *opcodes = (char *)ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		printf("%02hhx", opcodes[index]);

		if (index + 1 == bytes)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
