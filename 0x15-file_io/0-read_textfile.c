#include <stdlib.h>	/*For malloc and free*/
#include "main.h"

/**
 * read_textfile - Reads a file and prints it to the POSIX standard output.
 * @filename: Pointer to the file to be read.
 * @letters: The number of lettersit should read and print.
 * Return: The actual number of letters it could read and print,
 * or 0 if the fle can not be opened or read,
 * or 0 if filenmame is NULL,
 * or 0 if wrie fails or does not write the expected amunt of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t r, w;	/*read and write modes, respectively*/
	int fd;	/*file descriptor*/

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (r);

}
