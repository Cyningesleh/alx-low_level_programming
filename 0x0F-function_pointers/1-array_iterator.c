#include <stdlib.h>

/**
 * array_iterator - executes a function given as parameter
* @array: array to print
 * @action:function pointer
 * @size: size of array
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
for (i = 0; i < size; i++)
{
if (array != NULL && action != NULL)
action(array[i]);
}
}
