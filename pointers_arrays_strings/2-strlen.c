#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int c;
c = 0;

while (s[c] != '\0')
{
c++;
}
return (c);
}
