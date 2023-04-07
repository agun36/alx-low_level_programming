#include "main.h"

#define BUFFER_SIZE 1024
#define READ_ERROR "Error Can't read from file %s\n"
#define WRITE_ERROR "Error Can't write to %s\n"
#define CLOSE_ERROR "Error: Cant close fd %d\n"

/* 
 * main - copies the content of a file to othr file
 * @argc: no of argu passed
 * @argv: array of pointer
 *
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]);
		close(file_from);
		exit(99);
	}

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, CLOSE_ERROR, file_from);
		close(file_to);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, CLOSE_ERROR, file_to);
		exit(100);
	}

	return (0);
}
