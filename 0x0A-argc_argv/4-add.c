#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
unsigned int i, summation, number;

summation = 0;

if (argc < 3)
{
printf("%d\n", 0);
return (0);
}
while (argc-- && argc > 0)
{
for (i = 0; argv[argc][i] != '\0'; i++)
{
if (!(isdigit(argv[argc][i])))
{
printf("Error\n");
return (1);
}
}
number = atoi(argv[argc]);
summation += number;
}
printf("%d\n", summation);
return (summation);
}
