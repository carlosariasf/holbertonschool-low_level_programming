#include "holberton.h"
/**
 * rev_char - reset
 * @b: *char
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
 * @s: *char
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
rev_char(s);
}
}
