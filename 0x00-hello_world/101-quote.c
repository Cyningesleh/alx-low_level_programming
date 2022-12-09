#include <unistd.h>
/**
 *main - prints "and that piece of art is useful" - dora korpar, 2015-10-19",
 *follwed by a new line, to standard error
 *
 *description - Write a C program that prints to stdrr
 *Return : Always 1.
 */
int main(void)
{
write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	59);
return (1);
}
