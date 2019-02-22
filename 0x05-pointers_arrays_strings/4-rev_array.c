#include "holberton.h"
/**
 * reverse_array - reset
 *
 * @a: int
 * @n: int
 *
 * Return: int return the size of the char.
**/
void reverse_array(int *a, int n)
{
int i;
int *b = a;

for (i = 0; i < n / 2; i++)
{
int v = b[i];
b[i] = b[n - 1 - i];
b[n - 1 - i] = v;
}
}
