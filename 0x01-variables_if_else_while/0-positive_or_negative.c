#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

#include <stdio.h>
/**
*main - Entry point
*
*return : Always 0 (success)
*
*Description - check if number stored in variable is -ve or +ve or 0
*
*/
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
  printf("%d is negative\n", n);
else
  printf("%d is zero\n", n);
return (0);
}