#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: no return.
 */

void _attribute_ ((constructor)) main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
