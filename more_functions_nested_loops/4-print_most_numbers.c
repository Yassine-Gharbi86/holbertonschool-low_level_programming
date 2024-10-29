#include "main.h"
/**
 * print_most_numbers - prints the digits from 0 to 9, excluding 2 and 4
 *
 * This function outputs the characters representing the digits
 * from 0 to 9, except for the digits 2 and 4. It utilizes the
 * _putchar function to print each character, followed by a
 * newline character after all valid digits are printed.
 *
 * Return: void
 */
void print_most_numbers(void)
{
char c;
for (c = '0' ; c <= '9' ; c++)
{
if (c != '2' && c != '4')
{
_putchar (c);
}
}
_putchar ('\n');
}
