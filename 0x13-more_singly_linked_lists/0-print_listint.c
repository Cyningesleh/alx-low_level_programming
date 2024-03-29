#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function prints all the elements of a listint_t list.
 * @h: list to be printed
 *
 * Return: The number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
