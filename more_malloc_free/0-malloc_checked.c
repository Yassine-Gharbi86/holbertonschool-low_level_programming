#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory with malloc and terminates the program
 * with exit(98) if allocation fails.
 * @b: the size of the memory block to be allocated.
 *
 * Return: a pointer to the allocated memory block.
 */
void *malloc_checked(unsigned int b)
{
void *block = malloc(b);
if (!block)
exit(98);
return (block);
}
