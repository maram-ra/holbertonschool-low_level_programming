#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: no return.
 */

void more_numbers(void)

{
int c, k;
for (c = 0; c <= 10; c++)
{
for (k = 0; k <= 14; k++)
{
if (k >= 10)
_putchar('1');
_putchar(k % 10 + '0');
}
_putchar('\n');

}

}
