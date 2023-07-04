#include<stdio.h>

/**
 * myStartupFun - To Apply the constructor attribute to myStartupFun() so that it
 *   will be executed before main()
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - to implement myStartupFun
 */
void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
