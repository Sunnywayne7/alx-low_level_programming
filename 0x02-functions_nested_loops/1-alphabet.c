#include<stdio.h>
#include"main.h"
/**
*print_alphabet - function to print alphabet
*
*Return: 0 if Success
*
*/
void print_alphabet(void)
{
char c = 'a';
while(c <= 'z')
{
_putchcar(c);
}
_putchar("\n");
return (0);
}