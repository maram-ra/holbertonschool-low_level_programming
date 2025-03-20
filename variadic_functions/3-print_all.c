#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the format specifier.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: c = char, i = integer, f = float, s = char *
 * If a string is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *sep = "";

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			printf("%s", sep);
			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			else if (format[i] == 'i')
				printf("%d", va_arg(args, int));
			else if (format[i] == 'f')
				printf("%f", va_arg(args, double));
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
			}
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
