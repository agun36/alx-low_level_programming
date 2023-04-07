/*
 * File: 0-read_textfile.c
 * Author: Akindele
 */

#include "main.h"
#include <fcntl.h>

/**
  * read_textfile - reads a text file and prints it to the POSIX standard output
  * @read_textfile: name of the file to read
  * @letters: number of letters it should read and print
  *
  * Return: actual number of letters it could read and prints, 0 otherwise
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenght = 0;
	char *buf = malloc(sizeof(char) * letters);

	if (filename ==NULL || buf == NULL)
		return (0);

	fd = open(filename,O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	lenght = read(fd, buf, letters);
	if (lenght == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	if (write(STDOUT_FILENO, buf, lenght) != lenght)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (lenght);
}
