#include <stdlib.h>
/**
 *int_index - function that searches for an integer
 *@cmp: function pointer
 *@array: array of integer
 *@size: size of the array
 *Return: i or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (cmp != NULL && array != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}

return (-1);
}
