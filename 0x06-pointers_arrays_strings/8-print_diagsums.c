#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - reset
 * @a: int
 * Return : char return the size of the char.
**/
void print_diagsums(int *a, int size)
{
int i, ii;
int o = 0;
int sum = 0;
int sum2 = 0;

for (i = 0; i < size; i++)
{
	for (ii = 0; ii < size; ii++)
	{
	if(i == j)
	{
	sum = sum + a[o];
	}
	if((i + ii) == (size - 1))
	{
	sum2 = sum2 + a[o];
	}
	o++;
	}
}
sum2 = sum;

printf("%d, %d\n", sum, sum2);
}
