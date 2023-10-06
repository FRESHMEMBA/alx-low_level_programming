#include "main.h"

/**
 * append_text_to_file - Appends text at te end of a file.
 * @filename: The name of the file.
 * @text_content: A NULL terminated string to be added at the end of th file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_file, write_m, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o_file = open(filename, O_WRONLY | O_APPEND);
	write_m = write(o_file, text_content, length);

	if (o_file == -1 || write_m == -1)
		return (-1);

	close(o_file);

	return (1);
}
