#include "main.h"
/**
 * _strcmp - check the code
 * Description: compare two strings :)
 * @s1 : pointer to string1
 * @s2 : pointer to string2
 * Return: int
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
