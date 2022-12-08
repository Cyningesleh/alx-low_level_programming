#include <stdio.h>

/**
* main -Entry point
*
* return: Always 0 (success)
*/
int main(void)
{
printf("%lu\n", sizeof(char));
printf("%lu\n", sizeof(int));
printf("%lu\n", sizeof(long int));
printf("%lu", sizeof(long long int));
printf("%lu", sizeof(float));
 return (0);
}
