#include "holberton.h"
/**
 * *string_toupper - reset
 * @s: int
 * Return: char return the size of the char.
**/
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{

if (s[i] >= 97 && s[i] <= 122)
{
	s[i] -= 32;
}
}

return (s);
}
