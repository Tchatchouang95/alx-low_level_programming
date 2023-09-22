#include <stdio.h>

void __attribute__((constructor)) pbm(void);

/**
 * pbm - prints before main
 */
void pbm(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
