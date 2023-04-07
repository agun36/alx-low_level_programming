#include "main.h"
#define BUFFER_SIZE 1024

/**
 * check_args - checks that the correct number of arguments were
 * @argc: the number of arguments
 *
 *If the number of arguments is not correct, prints an error message and exits
 * with a status code of 97.
 * Return: void
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_read - checks for errors when reading from a file
 * @check: the return value of the read syscall
 * @file: the name of the file that was being read from
 * @fd_from: the file descriptor of the source file
 * @fd_to: the file descriptor of the destination file
 *
 * If an error occurred when reading from the file (i.e., if `check` is -1),
 * prints an error message and exits with a status code of 98. If `fd_from` and
 * `fd_to` are not -1, they are closed before exiting.
 */
void check_read(ssize_t check, char  *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, READ_ERROR, file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check_write - checks for errors when writing to a file
 * @check: the return value of the write syscall
 * @file: the name of the file that was being written to
 * @fd_from: the file descriptor of the source file
 * @fd_to: the file descriptor of the destination file
 *
 * If an error occurred when writing to the file (i.e., if `check` is -1),
 * prints an error message and exits with a status code of 99. If `fd_from` and
 * `fd_to` are not -1, they are closed before exiting.
 */
void check_write(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, WRITE_ERROR, file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check_close - checks for errors when closing a file descriptor
 * @check: the return value of the close syscall
 * @fd: the file descriptor that was being closed
 *
 * If an error occurred when closing the file descriptor (i.e.,if`check`is -1),
 * prints an error message and exits with a status code of 100.
 */
void check_close(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, CLOSE_ERROR, fd);
		exit(100);
	}
}


/**
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

	check_read((ssize_t)file_from, argv[1], -1, -1);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	check_write((ssize_t)file_to, argv[2], file_from, -1);
	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			bytes_written = -1;
		check_write(bytes_written, argv[2], file_from, file_to);
	}

	check_close(close(file_from), file_from);
	check_close(close(file_to), file_to);

	return (0);
}
