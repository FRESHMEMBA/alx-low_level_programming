#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the program's arguments.
 * @ac: The number of arguments passed to he program.
 * @av: An array of pointers pointing to the program's arguments.
 * Return: A pointer to a new string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, ptr_len = 0, str_len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str_len++;
			j++;
		}
	}

	str_len += ac;
	ptr = malloc(sizeof(char) * str_len + 1);

	if (ptr == NULL)
		return (NULL);

	ptr[ptr_len] = '\n';
	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			ptr[ptr_len] = av[i][j];
			j++;
			ptr_len++;
		}
		ptr[ptr_len++] = '\n';
	}

	return (ptr);
}
