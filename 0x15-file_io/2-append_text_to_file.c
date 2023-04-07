#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String to get the length of a string
  *
  * Return: Length of the string
  */

int _strlen(char *s)
{
	int lenght = 0;

	while (s && s[lenght])
		lenght++;

	return (lenght);
}

/**
  * append_text_to_file - Appends text at the end of a file
  * @filename: Name of the file
  * @text_content: NULL terminated string to add at the end of the file
  *
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, lenght = 0, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY |O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
		lenght = _strlen(text_content);

	w = write(fd, text_content, lenght);
	if (w == 1 || w != lenght)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
