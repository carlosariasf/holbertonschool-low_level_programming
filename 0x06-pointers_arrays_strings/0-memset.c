#include "holberton.h"
/**
 * *_memset - reset
 * @s: int
 * @b: int
 * @n: int
 * Return: char return the size of the char.
**/
char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < (int) n; i++)
{

s[i] = b;

}

return (s);
}
