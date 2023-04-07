#include "main.h"
#include <stdint.h>

#define BUFFER_SIZE 1024

void copy_file(const char *source_file_path, const char *target_file_path)
{
	FILE *source_file, *target_file;
	char buffer[BUFFER_SIZE];
	size_t bytes_read;

	source_file = fopen(source_file_path, "rb");
	if (source_file == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file_path);
		exit(98);
	}

	target_file = fopen(target_file_path, "wb");
	if (target_file == NULL)
	{
		fclose(source_file);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target_file_path);
		exit(99);
	}

	while ((bytes_read = fread(buffer, sizeof(char), BUFFER_SIZE, source_file)) > 0)
	{
		if (fwrite(buffer, sizeof(char), bytes_read, target_file) != bytes_read)
		{
			fclose(source_file);
			fclose(target_file);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target_file_path);
		 exit(99);
		}
	}

	if (fclose(source_file) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", (long int)source_file);
		exit(100);
	}

	if (fclose(target_file) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", (long int)target_file);
		exit(100);
	}
}

/**
  * main - copies the content of a file to other file
  * @argc: number of argu passed
  * @argv: array of pointers to the argu
  *
  * Return: 0 sucess
  */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
