#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a func given as parameter
 * @array: the array to print
 * @action:function pointer
 * @size: size of array
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i < size; i++)
{
if (array != NULL && action != NULL)
action(array[i]);
}
}
