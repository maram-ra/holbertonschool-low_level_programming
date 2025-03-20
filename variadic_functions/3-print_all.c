#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints anything based on format string
 * @format: list of argument types (c:char, i:int, f:float, s:string)
 * @...: variable arguments to print
 */

void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, printed = 0;
char *str;
const char *ptr = format;

va_start(args, format);
while (ptr && *ptr)
{
if (*ptr == 'c')
printf("%c", va_arg(args, int));
if (*ptr == 'i')
printf("%d", va_arg(args, int));
if (*ptr == 'f')
printf("%f", va_arg(args, double));
if (*ptr == 's')
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
if (str != NULL)
printf("%s", str);
}
printed = 1;
ptr++;
while (ptr && *ptr && printed)
{
printf(", ");
printed = 0;
}
i++;
}
printf("\n");
va_end(args);
}
