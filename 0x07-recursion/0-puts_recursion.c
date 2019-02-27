#include "holberton.h"
/**
 * print_char - reset
 * @a: int
 * Return : char return the size of the char.
**/
void print_char(char *a)
{
if (*a != '\0')
{
_putchar(*a);
a++;
print_char(a);
}
}
/**
 * _puts_recursion - reset
 * @s: int
 * Return : char return the size of the char.
**/
void _puts_recursion(char *s)
{
print_char(s);
_putchar('\n');
}
