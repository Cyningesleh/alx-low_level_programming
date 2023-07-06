#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - func that deletes the head node of a listint_t linked list
 * @head: The double ptr at the beginning of the list
 *
 * Return: the head node data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *first_node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	first_node = *head;
	*head = first_node->next;
	n = first_node->n;
	free(first_node);
	return (n);
}
