#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  func that frees a listint_t list.
 * @head: ptr at the beginning of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
