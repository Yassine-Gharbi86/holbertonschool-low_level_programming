#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max, inclusive
 * @min: the smallest integer in the array
 * @max: the largest integer in the array
 *
 * Return: pointer to the newly allocated memory containing the array,
 * or NULL if memory allocation fails or if min > max
 */
int *array_range(int min, int max)
{
int *block;
int i, j = 0;
if (min > max)
return (NULL);
block = malloc((max - min + 1) * sizeof(int));
if (block == NULL)
return (NULL);
for (i = min; i <= max; i++)
block[j++] = i;
return (block);
}
