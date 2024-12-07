#include "main.h"
/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: string containing the binary number.
* Return: the converted number, or 0 if the string is invalid.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int number = 0;
int i;
if (b == NULL || *b == '\0')
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
number = (number << 1) | (b[i] - '0');
}
return (number);
}
