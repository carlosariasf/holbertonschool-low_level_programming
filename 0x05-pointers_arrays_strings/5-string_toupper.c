#include "holberton.h"
/**
 * *string_toupper - reset
 *
 * @p: int
 *
 *
 * Return: char return the size of the char.
**/
char *string_toupper(char *s)
{
int i;
char *b = s;

for (i = 0; b[i] != '\n'; i++)
{

if (b[i] >= 97 && b[i] <= 122)
{
	b[i] -= 32;
}
}

return (b);
}
