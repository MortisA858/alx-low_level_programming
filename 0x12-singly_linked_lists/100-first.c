#include <stdio.h>

void message(void) __attribute__((constructor));

/**
 * message - function that prints sentence before main function is executed
 * @__attribute__((constructor)): makes message function execute before main
 */
void message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
