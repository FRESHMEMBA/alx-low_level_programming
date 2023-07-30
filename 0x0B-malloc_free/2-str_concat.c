#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first sring to be concatenated.
 * @s2: The second string to be concatenated.
 * Return: A pointer to the newly allocated space
 * i memory containing the contents of s1,
 * followed by the contents of s2, and
 * null terminated, or null if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2;
	char *str_ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	str_ptr = (char *)malloc(len1 + len2 + 1);
	if (str_ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str_ptr[i] = s1[i];
	for (i = len1; i < len1 + len2; i++)
		str_ptr[i] = s2[i - len1];
	str_ptr[i] = '\0';

	return (str_ptr);
}
