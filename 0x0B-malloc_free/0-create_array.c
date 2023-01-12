#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - function to create an array of char and initialize
 *@size: size to be printed
 *@c: character string
 *Return: pointer
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
