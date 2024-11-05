#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - gets the length of a prefix substring
 * @s: the initial segment
 * @accept: the bytes to be checked against
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (NULL);
}
