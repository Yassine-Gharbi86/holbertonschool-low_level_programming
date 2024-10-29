#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: The character to be checked (as an integer)
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
