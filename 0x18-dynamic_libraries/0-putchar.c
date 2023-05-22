#include "main.h"
/**
  * _putchar - write the character c to stdout
  * @c: The character tprint
  *
  * Return: on Success 1.
  * on error, -1 is returned, and error is set
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
