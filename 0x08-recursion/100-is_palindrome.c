#include "main.h"
#include "2-strlen_recursion.c"

/**
 * palindrome - Checks whether a string is a palindrome.
 * @str: string to be checked.
 * @start: Start index.
 * @end: End index.
 * Return: 1 if s is a palindrom, and 0 if not.
 */
int palindrome(char *str, int start, int end)
{
	if (start >= end)
		return (1);

	if (str[start] == str[end])
		return (palindrome(str, start + 1, end - 1));

	return (0);
}


/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * Return: 1 if s is a palindrome, and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome(s, 0, len - 1));
}
