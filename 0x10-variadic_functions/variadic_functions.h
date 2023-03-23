#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_integer(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/**
 * struct print - struct to print with the correct function.
 * @t: type to print.
 * @f: function to print a type t.
 */
typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

#endif /* VARIADIC_FUNCTIONS_H */

