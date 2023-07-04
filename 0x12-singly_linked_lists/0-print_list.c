#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - this function checks the code for Holberton School students.
 * @h: list name
 * Return: node number.
 */


size_t print_list(const list_t *h)
{
int s = 0;

while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
s++;
h = h->next;
}
return (s);
} /*author:Cyningesleh*/
