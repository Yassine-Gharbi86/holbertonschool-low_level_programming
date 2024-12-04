#include "lists.h"
/**
* add_node - adds new node at the beginning of a list_t list.
* @head: a pointer to the head of the list_t list.
* @str: string to be added to the list_t list
*
* Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *duplicated_string;
unsigned int length = 0;
duplicated_string = strdup(str);
if (duplicated_string == NULL)
return (NULL);
while (str[length])
length++;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(duplicated_string);
return (NULL);
}
new_node->str = duplicated_string;
new_node->len = length;
new_node->next = *head;
*head = new_node;
return (new_node);
}
