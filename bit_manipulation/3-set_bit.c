#include "main.h"
/**
* set_bit - sets the value of a bit at a given index to 1
* @n: number to search
* @index: index of the bit
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(*n) * 8)
return (-1);
*n |= (1UL << index);
return (1);
}
