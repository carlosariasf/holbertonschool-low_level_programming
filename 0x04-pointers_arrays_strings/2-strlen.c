#include "holberton.h"
/**
 * _strlen - reset
 *
 * @s: char
 *
 * Return: a return the size of the char.
**/

int _strlen(char *s)
{
int a, b;

for (a = 0; s[a] != '\0'; a++)
{
b++;
}

return (a);
}
