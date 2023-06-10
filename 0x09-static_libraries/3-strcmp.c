#include "main.h"
/**
 * _strcmp - compare 2 string
 * @c1:string
 * @c2:strmp
 * Return:int
 * cyningesleh
 */
int _strcmp(char *c1, char *c2)
{
while (((*c1 != '\0') && (*c2 != '\0')) && (*c1 == *c2))
{
c1++;
c2++;
}

if (*c1 == *c2)
{
return (0);
}

else
{
return (*c1 - *c2);
}
}
