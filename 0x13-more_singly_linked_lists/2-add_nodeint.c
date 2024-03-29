#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - func adds new node at the beginning of a listint_t list.
 * @head: a double ptr to the beginning of a listint_t list
 * @n: The integer to be added to the list
 *
 * Return: The address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
