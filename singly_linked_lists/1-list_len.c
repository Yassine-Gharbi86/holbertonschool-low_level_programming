#include "lists.h"
/**
* list_len - Returns number of elements in a linked list.
*
* @h: The head of the linked list.
*
* Return: The number of elements in the linked list.
*/
size_t list_len(const list_t *h)
{
size_t nodes_counter = 0;
while (h != NULL)
{
nodes_counter++;
h = h->next;
}
return (nodes_counter);
}
