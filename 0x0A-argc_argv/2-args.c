#include <stdio.h>

/**
 * main - prints all the program's arguments.
 * @argc: The number of arguments paased to the program.
 * @argv: An array containing the program's arguments.
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
