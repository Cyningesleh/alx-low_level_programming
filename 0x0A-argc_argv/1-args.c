#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program will prints the number of args
 * @argc: first par
 * @argv: second par
 *
 * Description: prints number of args
 * Return: 0 for code success
 */

int main(int argc, char **argv)
{
int total;

for (total = 0; total < argc; total++)
{
*argv[total] = *argv[total];
}
printf("%d\n", (total - 1));
return (0);
}
