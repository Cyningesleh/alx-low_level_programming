
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
list_t *ad;

ad = malloc(sizeof(list_t));
if (ad == NULL)
return (NULL);
ad->str = strdup(str);

ad->len = _strlen(str);
ad->next = *head;
*head = ad;

return (ad);
} /*Author: cyningesleh*/
