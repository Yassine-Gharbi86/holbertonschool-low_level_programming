#include "lists.h"
/**
* delete_dnodeint_at_index - deletes the node at a specific index
* @head: head of the list
* @index: index of the node to delete
* Return: 1 on success, -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = temp->next;
if (*head != NULL)
(*head)->prev = NULL;
free(temp);
return (1);
}
while (temp != NULL && i < index)
{
temp = temp->next;
i++;
}
if (temp == NULL)
return (-1);
if (temp->next != NULL)
temp->next->prev = temp->prev;
if (temp->prev != NULL)
temp->prev->next = temp->next;
free(temp);
return (1);
}
