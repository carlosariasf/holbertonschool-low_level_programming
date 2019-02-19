#include "holberton.h"
/**
 * _puts - reset
 *
 * @str: char
 *
 * Return : a return the size of the char.
**/

void _puts(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
_putchar(str[a] + 0);
}
_putchar('\n');
}
