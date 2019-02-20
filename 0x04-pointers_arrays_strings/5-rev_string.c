#include <stdio.h>
#include "holberton.h"
/**
 * rev_string - reset
 *
 * @s: char
 *
 * Return : a return the size of the char.
**/

void rev_string(char *s)
{
int a;
int *b;
*b = *s;

for (a = 0; s[a] != '\0'; a++)
{
b++;
}
printf("%s", s);

}
