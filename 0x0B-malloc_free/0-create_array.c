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
if (size == 0)
{
return (NULL);
}

char *array = (char *)malloc(sizeof(char) * size);
if (array == NULL)
{
return (NULL);
}

unsigned int i;
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
