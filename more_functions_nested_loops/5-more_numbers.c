#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14 ten times
 *
 * This function outputs the numbers from 0 to 14, each followed
 * by a newline, and does this for a total of 10 lines.
 *
 * Return: void
 */
void more_numbers(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
_putchar('1');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
