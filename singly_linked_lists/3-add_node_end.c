#include "lists.h"
/**
* add_node_end - adds a new node at the end of a list_t list
* @head: Double pointer to the head of the linked list.
* @str: string to be added to the new node
* Return: the address of the new element or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp = *head;
char *duplicated_str;
unsigned int length = 0;
duplicated_str = strdup(str);
if (duplicated_str == NULL)
return (NULL);
while (str[length])
length++;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(duplicated_str);
return (NULL);
}
new_node->str = duplicated_str;
new_node->len = length;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
return (new_node);
}
