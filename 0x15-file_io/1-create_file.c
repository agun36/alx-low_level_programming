#include "main.h"

/**
  * create_file - creates a fil
  * @filename: name of file to create
  * @text_content: is a Null terminator string
  *
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int result = -1;
	int o = -1;
	int w = -1;
	int len = 0;

	if (filename != NULL)
	{
		if (text_content != NULL)
		{
			for (len = 0; text_content[len]; len++)
				;
		}

		o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (o != -1)
		{
			w = write(o, text_content, len);

			if (w != -1 && w == len)
			{
				result = 1;
			}
			close(o);
		}
	}

	return (result);
}
