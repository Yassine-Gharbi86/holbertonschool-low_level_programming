#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: The character to be checked (as an integer)
 *
 * Return: 1 if the character is a digit (0-9), 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
