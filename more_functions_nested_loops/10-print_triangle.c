#include "main.h"
/**
 * print_triangle - Prints a triangle of a given size.
 * @size: The size of the triangle.
 *
 * Prints a triangle of '#' characters, followed by a new line.
 * If size is 0 or less, only prints a new line.
 *
 * Returns: void
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
