#include "holberton.h"
/**
 *  _strlen_recursion - reset
 * @s: *char
**/

int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
return(0);
}
