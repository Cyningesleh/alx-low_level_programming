
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a char
 * Return: value is i
 */
int _strlen(const char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * add_node - adds a new node at beginning of a list_t list.
 * @head: list_t list head.
 * @str: value to be inserted into element.
 * Return: node number.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *add;

add = malloc(sizeof(list_t));
if (add == NULL)
return (NULL);
add->str = strdup(str);

add->len = _strlen(str);
add->next = *head;
*head = add;

return (add);
} /*Author: cyningesleh*/
