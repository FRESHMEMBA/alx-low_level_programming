#include <stdlib>
#include "main.h"

/**
 * read_textfile - Reads a file and prints it to the POSIX standard output.
 * @filename: Pointer to the file to be read.
 * @letters: The number of lettersit should read and print.
 * Return: The actual number of letters it could read and print,
 * or 0 if the fle can not be opened or read,
 * or 0 if filenmame is NULL,
 * or 0 if wrie fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_d;
	ssize_t w_mode;
	ssize_t text;

	file_d = open(filename, 0_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	text = read(file_d, buffer, letters);
	w_mode = write(STDOUT_FILENO, buffer, text);

	free(buffer);
	close(file_d);
	return (w);
}
