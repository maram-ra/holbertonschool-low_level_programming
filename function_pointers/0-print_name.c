#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - function to print
* @name: pointer of char type
* @f: pointre to function
* Return: always successful
**/

void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
f(name);
}
