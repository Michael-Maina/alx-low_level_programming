#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the POSIX standard output
 *                 if file cannot be read or opened, return 0
 *                 if filename is NULL, return 0
 *                 if write fails, return 0
 * @letters: number of letters to read and print
 * @filename: file to read from
 *
 * Return: actual number of letters function could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	size_t count = 0;
	int write_output = 0;
	char *a;

	if (filename == NULL || fd == -1)
		return (0);

	while (count < letters)
	{
		read(fd, &a, 1);
		write_output = write(STDOUT_FILENO, &a, 1);

		if (write_output == -1)
		{
			close(fd);
			return (0);
		}
		count++;
	}

	close(fd);
	return (count);
}
