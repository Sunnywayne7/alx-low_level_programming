#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
*print_number- Function that prints an integer
*@n: int type number
*Description: can only use putchar to print
*/
void print_numeber(int n)
{
unsigned int n1 = 0;
if (n < 0)
{
n1 = -n;
_putchar('_');
}
else
{
n1 - n;
}
if (n1 / 10)
{
print number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
