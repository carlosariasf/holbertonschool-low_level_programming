#include <stdio.h>
#include "holberton.h"
/**
 * main - Init function
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
int main(void)
{
int n[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};
int s = sizeof(n), o;

for(o = 0; o <= s; o++)
{
_putchar(n[o]);
}

return (0);
}
