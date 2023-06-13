#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory, or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
unsigned int a, b, c, d;
char *s;

if (s1 == NULL)
a = 0;
else
{
for (a = 0; s1[a]; a++)
;
}
if (s2 == NULL)
b = 0;
else
{
for (b = 0; s2[b]; b++)
;
}
c = a + b + 1;
s = malloc(k *sizeof(char));
if (s == NULL)
return (NULL);
for (d = 0; d < i; d++)
s[l] = s1[l];
for (d = 0; d < b; d++)
s[d + a] = s2[d];
s[a + b] = '\0';
return (s);
}
