#include"main.h"
/**
*print_number- Function that prints an integer
*@n: int type number
*Description: can only use putchar to print
*/
void print_numeber(int n)
{
unsigned int num = n;
/*first check if its negative*/
if (n < 0)
{
_putchar('-');
num = -num;
}
/*print the first few digits*/
if ((num / 10) > 0)
print_number(num / 10);
/*print the last digit*/
_putchar((num % 10) + 48)
}
