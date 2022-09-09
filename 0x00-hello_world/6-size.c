#include <stdio.h>
/**
**main-Entry point
**
**Return:Always 0(Success)
*/
gcc (6-size.c -m32 -o size32 2)> /tmp/32
gcc (6-size.c -m64 -o size64 2)> /tmp/64
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int:%lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
