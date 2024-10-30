#include "main.h"
/**
 * print_line - Prints a line of underscores.
 * @n: The number of underscores to print.
 * If n is 0, only a newline is printed.
 * This function uses the _putchar function to output
 * each underscore character and ends with a newline.
 */
void print_line(int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
