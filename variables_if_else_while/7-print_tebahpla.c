#include <stdio.h>

/**
  * main - Prints the numbers since 0 to 9
  *
  * Return: Always (Success)
  */

int main(void)

{
char r;
for (r = 'z'; r >= 'a'; r--)
{
putchar(r);
}
putchar('\n');

return (0);
}
