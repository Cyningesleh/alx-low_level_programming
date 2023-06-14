#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of ints initialized to 0
 * @width: width of arr
 * @height: height of arr
 *
 * Return: a double pointer to the 2D arr
 */
int **alloc_grid(int width, int height)
{
int k, l;
int **a;

if (width <= 0 || height <= 0)
return (NULL);
a = (int **)malloc(sizeof(int *) * height);
if (a == NULL)
return (NULL);
for (k = 0; k < height; k++)
{
a[k] = (int *)malloc(sizeof(int) * width);
if (a[k] == NULL)
{
for (l = 0; l < k; l++)
free(a[l]);
free(a);
return (NULL);
}
for (l = 0; l < width; l++)
{
a[k][l] = 0;
}
}
return (a);
}
