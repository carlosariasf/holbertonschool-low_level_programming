#include "holberton.h"
/**
 * print_rev - reset
 *
 * @s: char
 *
 * Return : a return the size of the char.
**/

void print_rev(char *s)
{
int a, b;

for (a = 0; s[a] != '\0'; a++)
{
}
for (b = a - 1; b >= 0; b--)
{
	_putchar(s[b]);
}
_putchar('\n');
}
