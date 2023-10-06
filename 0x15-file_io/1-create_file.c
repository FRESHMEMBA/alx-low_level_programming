#include "main.h"

/**
 * create_file - Creates a file.
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * If the file already exists, truncate it
 * @filename: Name of the file to be created.
 * @text_content: A NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, write_m, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_m = write(file_d, text_content, length);

	if (file_d == -1 || write_m == -1)
		return (-1);

	close(file_d);

	return (1);
}

