#include "main.h"

/**
  * _isalpha - it contain int c that looks for alphabet letter
  * @c: c as a parameter
  *
  * Return: it return 1 and 0
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
