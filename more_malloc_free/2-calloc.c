#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array,
 * using malloc and initializes it to zero
 * @nmemb: number of elements to allocate memory for
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory, or NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *block;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
block = malloc(nmemb * size);
if (block != NULL)
{
for (i = 0; i < (nmemb * size); i++)
block[i] = 0;
return (block);
}
else
return (NULL);
}
