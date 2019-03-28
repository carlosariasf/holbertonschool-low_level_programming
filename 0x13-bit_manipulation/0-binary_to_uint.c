#include <stdlib.h>
#include "holberton.h"
int _atoi(const char *str);
/**
 * binary_to_uint - Binary
 * @b: char pointer
 *
 * Return: binary
 *
**/
unsigned int binary_to_uint(const char *b)
{
int base = 1, i = _atoi(b), dec = 0, rem, j = 0;

while (i > 0)
{
	if (b[j] < 47 || b[j] > 58)
		return (0);
	rem = i % 10;
	dec = dec + rem * base;
	i = i / 10;
	base = base * 2;
	j++;
}
return (dec);
}
/**
 * _atoi - function
 * @str: string
 * Return: int
**/
int _atoi(const char *str)
{
unsigned int res = 0, i;

for (i = 0; str[i] != '\0'; ++i)
	res = res * 10 + str[i] - '0';
return (res);
}
