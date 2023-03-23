#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *str;

	va_start(ap, format);

	while (format && format[i])
	{
		j = 1;
		switch (format[i])
		{
			case 'c':
				_putchar(va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				j = 0;
				break;
		}
		if (format[i + 1] && j)
			printf(", ");
		i++;
	}
	va_end(ap);

	printf("\n");
}
