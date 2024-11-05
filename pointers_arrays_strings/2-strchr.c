#include "main.h"
#include <stddef.h>
/**
* _strchr - Locates a character in a string.
* @s: The string to be searched.
* @c: The character to be located.
* Return: The first occurrence of the character c in the string s.
* If the character is not found, NULL is returned.
*/
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return (NULL);
}
