#include <unistd.h>

/**
 * Entry point- main
 * prints "and that piece of art is useful" - Dora Korpar 2015-10-19",
 * followed by a new line,
 * to the standard error.
 * Return: Always 1.
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
