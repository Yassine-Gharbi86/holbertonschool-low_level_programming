#include "lists.h"
/**
* print_dlistint - Prints all the elements of a dlistint_t list.
* @h: Head of the doubly linked list.
* Return: The number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t nodes_counter = 0;
while (h != NULL)
{
printf("%d\n", h->n);
nodes_counter++;
h = h->next;
}
return (nodes_counter);
}
