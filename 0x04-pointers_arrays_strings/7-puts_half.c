#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - reset
 *
 * @str: char
 *
 * Return : a return the size of the char.
**/
void puts_half(char *str)
{
int a, b, c;

for (a = 0; str[a] != '\0'; a++)
{
}
for (b = (a / 2); b <= a ; b++)
{
c = str[b];
_putchar(0 + c);
}
_putchar('\n');
}
