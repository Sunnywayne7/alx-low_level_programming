#include"main.h"
/**
*print_number- Function that prints an integer
*@n: int type number
*Description: can only use putchar to print
*/
int main(void)
{
long int x = 612852475143;
long int py;
for (py = 2; py < x; py++)
{
if (x % py == 0)
{
x = x / py;
}
}
printf("%ld\n", py);
return (0);
}
