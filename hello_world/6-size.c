#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the size of various data types on the computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %u byte(s)\n", (unsigned int) sizeof(char));
printf("Size of an int: %u byte(s)\n", (unsigned int) sizeof(int));
printf("Size of a long int: %lu byte(s)\n",
(unsigned long) sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n",
(unsigned long) sizeof(long long int));
printf("Size of a float: %u byte(s)\n", (unsigned int) sizeof(float));

return (0);
}
