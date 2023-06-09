#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: no of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i, value = 1;

if (argc != 3)
{
printf("Error\n");
return (1);
}
for (i = 1; i < argc; i++)
{
value *= atoi(argv[i]);
}
printf("%d\n", value);
return (0);
}
