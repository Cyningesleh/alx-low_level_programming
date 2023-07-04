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
list_t *curr, *nxt;

curr = head;
while (curr != NULL)
{
nxt = curr->nxt;
free(curr->str);
free(curr);
curr = nxt;
}
} /*Author: cyningessleh*/
