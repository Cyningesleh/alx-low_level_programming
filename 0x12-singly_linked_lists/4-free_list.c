#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: a pointer to the start of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
list_t *curr, *next;

curr = head;
while (curr != NULL)
{
next = curr->next;
free(curr->str);
free(curr);
curr = next;
}
} /*Author: cyningessleh*/
