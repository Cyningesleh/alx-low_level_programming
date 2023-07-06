#include "lists.h"

/**
 * sum_listint - func returns sum of all data (n) of a listint_t linked list
 * @head: the pointer to first node in the list
 *
 * Return: the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int summ = 0;

	while (head != NULL)
	{
		summ += head->n;
		head = head->next;
	}
	return (summ);
}
