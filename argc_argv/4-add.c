#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Checks if a string contains only digits
 * @s: The string to check
 *
 * Return: 1 if the string is a number, 0 otherwie
 */
int is_number(char *s)
{
int i = 0;

if (s[0] == '\0')
return (0);

while (s[i])
{
if (!isdigit(s[i]))
return (0);
i++;
}
return (1);
}

/**
 * main - Adds positive numbers given as arguments
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
int sum = 0, i, num;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
num = atoi(argv[i]);
sum += num;
}

printf("%d\n", sum);
return (0);
}

