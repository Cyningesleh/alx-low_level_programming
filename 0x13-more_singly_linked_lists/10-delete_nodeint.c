#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - func deletes node at index
 * of a listint_t linked list.
 * @head: the double pointer to first node in the list
 * @index: the index of the node to be deleted
 *
 * Return: the pointer to the indexed node.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (count = 0; count < index - 1; count++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
