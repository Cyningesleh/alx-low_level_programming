#include "lists.h"

/**
 * get_nodeint_at_index - func that returns nth node of a listint_t linked list.
 * @head: the ptr to first node in the list
 * @index: the index of the node to return
 *
 * Return: the ptr to the indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);
	for (count = 0; count < index; count++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
