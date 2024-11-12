#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i;
if (str == NULL)
{
return (NULL);
}
dup = (char *)malloc(sizeof(char) * (strlen(str) + 1));
if (dup == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
dup[i] = str[i];
}
dup[i] = '\0';
return (dup);
}
