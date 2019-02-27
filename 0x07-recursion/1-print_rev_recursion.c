#include "holberton.h"
/**
 * rev_char - reset
 * @b: int
 * @n: int
**/
void rev_char(char *b, int n)
{
if (*b != '\n')
{
_putchar(*b);
b--;
n--;
rev_char(b, n);
}
}
/**
 * print_char - reset
 * @a: int
 * @count: int
**/
void print_char(char *a, int count)
{
if (*a != '\0')
{
a++;
count++;
print_char(a, count);
}
else
{
rev_char(a, count);
}
}
/**
 * _print_rev_recursion - reset
 * @s: int
**/
void _print_rev_recursion(char *s)
{
print_char(s, 0);
_putchar('\n');
}
