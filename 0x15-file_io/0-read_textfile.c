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
	int fd;/* file descriptor */
	ssize_t bytes_read; /*number of bytes read*/
	ssize_t bytes_written; /*number of bytes read*/
	char *buf = malloc(sizeof(char) * letters);/*buffer to store the file content & allocate memory for d buff*/


	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);/*open file in read-only mode*/

	if (buf == NULL)/* check if memory allocate failed*/
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buf, letters);/*read up 2 letters from d file*/

	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (bytes_written);
}
