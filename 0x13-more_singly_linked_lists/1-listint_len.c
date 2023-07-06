#include "lists.h"

/**
 * listint_len - func returns the num of elements in a linked listint_t list.
 * @h: The pointer to the linked list
 *
 * Return: The number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
