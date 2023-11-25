#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program.
 * @argc: The number of arguments paased to the program.
 * @argv: An array containing the program's arguments.
 * Return: Always 0 (success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
