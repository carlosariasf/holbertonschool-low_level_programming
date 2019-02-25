#include "holberton.h"
/**
 * *_memcpy - reset
 * @dest: int
 * @src: int
 * @n: int
 * Return: char return the size of the char.
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest2 = dest;
char *src2 = src;
int i;

for (i = 0; i < (int) n; i++)
{

*dest2 = *src2;
dest2++;
src2++;

}

return (dest);
}
