#include "function_pointers.h"
/**
 * array_iterator - Applies a function to each element of an array
 * @array: The array to loop through
 * @size: The size of the array
 * @action: A function to execute on each element
 *
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
