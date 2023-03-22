#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to print.
 * @f: A function pointer.
 *
 * Description: This function prints a name using a function
 *              pointed to by @f.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
