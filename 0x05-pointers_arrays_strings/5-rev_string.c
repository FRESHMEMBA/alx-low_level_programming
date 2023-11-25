#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string that is to be reversed.
 * Return: void
 */

void rev_string(char *s)
{
	int start_i = 0;
	int end_i = _strlen(s) - 1;
	char temp;

	while (start_i <= end_i)
	{
		temp = s[start_i];
		s[start_i] = s[end_i];
		s[end_i] = temp;
		start_i++;
		end_i--;
	}
}
