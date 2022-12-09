#include <stdio.h>

/**
*main - Entry point
*
*
*Description - Prints out the sizes of the different varaible typesDescription - Prints out the sizes of the different varaible types
*Return: Always 0 (success)
*/
int main(void)
{

char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
