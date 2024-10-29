#include "main.h"
#include <unistd.h>
/**
 * print_numbers - prints the digits from 0 to 9
 *
 * This function outputs the characters representing the digits
 * from 0 to 9 followed by a newline character. It utilizes the
 * _putchar function to print the characters.
 *
 * Return: void
 */
void print_numbers(void)
{
char c;
for (c = '0' ; c <= '9' ; c++)
{
_putchar (c);
}
_putchar ('\n');
}
