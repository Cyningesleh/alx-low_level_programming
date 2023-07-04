#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - length of a string
 * @str: string to find the length
 *
 * Return: string length
 */
unsigned int _strlen(char *str)
{
unsigned int i;

for (i = 0; str[i]; i++)
;
return (i);
}

/**
 * add_node_end - new node added to the end of linked list
 * @head: a double pointer to a linked list
 * @str: string to be added to the new node
 *
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;

if (str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = _strlen(new_node->str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new_node;
return (new_node);
} /*Author: cyningesleh*/
