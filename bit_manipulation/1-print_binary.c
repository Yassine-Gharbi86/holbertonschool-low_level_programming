#include "main.h"
/**
* print_binary - prints the binary representation of a number
* @n: the number to print in binary
*/
void print_binary(unsigned long int n)
{
int i;
int bit_found = 0;
for (i = sizeof(n) * 8 - 1; i >= 0; i--)
{
if (n & (1UL << i))
{
_putchar('1');
bit_found = 1;
}
else if (bit_found)
{
_putchar('0');
}
}
if (!bit_found)
_putchar('0');
}
