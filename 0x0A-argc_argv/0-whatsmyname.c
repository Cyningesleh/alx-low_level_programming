#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - entry point
 *@argc: argument count
 *@argv: arguement vector
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
while (argc--)
{
_putchar("%s\n", *argv++);
}
return (0);
}
