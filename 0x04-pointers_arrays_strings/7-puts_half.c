#include "holberton.h"
/**
 * puts_half - reset
 *
 * @str: char
 *
 * Return : a return the size of the char.
**/
void puts_half(char *str)
{
int a, b;

for (a = 0; str[a] != '\0'; a++)
;
if (a % 2 == 0)
{
	for (b = (a / 2); b <= a; b++)
	{
	char c = str[b];
	_putchar(c);
	}
}
else
{
	for (b = ((a - 1) / 2); b <= a; b++)
	{
	char c = str[b];
	_putchar(c);
	}
}
_putchar('\n');
}
