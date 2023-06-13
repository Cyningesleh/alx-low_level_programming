#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
unsigned int a, b;
char *s;

if (str == NULL)
return (NULL);
for (a = 0; str[a]; a++)
;
a++;
s = malloc(a *sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (b = 0; b < a; b++)
{
s[b] = str[b];
}
return (s);
}
