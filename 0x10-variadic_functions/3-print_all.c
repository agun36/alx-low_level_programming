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
	int i = 0, j;
	char *str;

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				j = 0;
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				j = 0;
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				j = 0;
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != '\0' &&  j == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
