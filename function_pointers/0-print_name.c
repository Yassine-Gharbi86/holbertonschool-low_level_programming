#include "function_pointers.h"
#include <stddef.h>
/**
* print_name - Calls a function to print a name
* @name: The name to be printed
* @f: A pointer to the function to use for printing
*
* Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
