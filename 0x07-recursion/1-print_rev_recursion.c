#include "holberton.h"
/**
 * rev_char - reset
 * @b: int
 * @n: int
**/
void rev_char(char *b)
{
if (*b != '\n')
{
_putchar(*b);
b--;
rev_char(b);
}
}
/**
 * print_char - reset
 * @a: int
 * @count: int
**/
void print_char(char *a)
{
if (*a != '\0')
{
a++;
print_char(a);
}
else
{
rev_char(a);
}
}
/**
 * _print_rev_recursion - reset
 * @s: int
**/
void _print_rev_recursion(char *s)
{
print_char(s);
_putchar('\n');
}
