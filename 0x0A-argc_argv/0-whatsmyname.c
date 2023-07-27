#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: The number of arguments paased to the program.
 * @argv: An array containing the program's arguments.
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
