#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - reset
 *
 * @str: char
 *
 * Return : a return the size of the char.
**/
void puts2(char *str)
{
int a, b;

for (a = 0; str[a] != '\0'; a++)
{
	if(str[a] % 2 == 0 || str[a] == 0)
	{
	b = str[a];
	_putchar(0 + b);
	}
}
_putchar('\n');
}
