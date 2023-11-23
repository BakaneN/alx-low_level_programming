#include <stdio.h>

/**
 * myStartupFun - funtion that runs before main
 */

void myStartupFun(void) __attribute__((constructor))

/**
 * myStartupFun - implementation of myStartupFun
 */

void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

int main(void)
{

	/* Rest of your main function code goes here*/

	return (0);
}
