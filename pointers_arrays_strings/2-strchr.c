#include "main.h"
#include <stdio.h>

/**
* _strchr - locates a character in a string
* @s : the string to search in
* @c : the character to locate
* Return: a pointer to the first occurrence of the character c in the string s
* or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{

int a;

while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
