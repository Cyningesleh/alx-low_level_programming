#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - to check code for Holberton School students.
 * @h: list name
 * Return: node number.
 */

size_t list_len(const list_t *h)
{
int s = 0;

while (h)
{
s++;
h = h->next;
}
return (s);
} /*Author: Cyningesleh*/
