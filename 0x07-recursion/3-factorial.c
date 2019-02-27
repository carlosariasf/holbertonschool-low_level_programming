#include "holberton.h"
/**
 *  factorial - reset
 * @s: *char
 * Return: 0
**/

int factorial(int n)
{
if (n > 0)
{
return ((n * factorial(n - 1)) * -1);
}

return (-1);
}
