#include "holberton.h"
/**
 * rev_char - reset
 * @b: int
**/
void rev_char(char *b)
{
if (*b != '\n')
{
b--;
_putchar(*b);
rev_char(b);
}
}

/**
 * _print_rev_recursion - reset
 * @s: int
**/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
s++;
_print_rev_recursion(s);
}
else
{
s++;
rev_char(s);
}
}
