#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: The maximum number of bytes to concatenate from s2
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t len1 = strlen(s1 ? s1 : "");
size_t len2 = strlen(s2 ? s2 : "");
size_t len_n = (n > len2) ? len2 : n;
char *concat = malloc(len1 + len_n + 1);
if (!concat) return NULL;
strcpy(concat, s1);
strncat(concat, s2, len_n);
return concat;
}
