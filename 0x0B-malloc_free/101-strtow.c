#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: Pointer to an array of strings (words),
 * or NULL if str == NULL or if it fails.
 */
char **strtow(char *str)
{
	unsigned int i, j, k, n_chars = 0, n_words = 0;
	char **words_ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			n_words++;
	}
	words_ptr = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (words_ptr == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < n_words; i++)
	{
		while (str[k] == ' ')
			k++;
		n_chars = 0;
		while (str[k + n_chars] != ' ' && str[k + n_chars] != '\0')
			n_chars++;
		words_ptr[i] = (char *)malloc(sizeof(char) * (n_chars + 1));
		if (words_ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words_ptr[j]);
			free(words_ptr);
			return (NULL);
		}
		for (j = 0; j < n_chars; j++)
			words_ptr[i][j] = str[k + j];
		words_ptr[i][j] = '\0';
		k += n_chars;
	}
	words_ptr[n_words] = NULL;
	return (words_ptr);
}
