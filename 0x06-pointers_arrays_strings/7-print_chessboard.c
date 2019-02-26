#include "holberton.h"
/**
 * print_chessboard - reset
 * @a: int
 * Return : char return the size of the char.
**/
void print_chessboard(char (*a)[8])
{
int i, ii;

for (i = 0; i < 8; i++)
{
	for (ii = 0; ii < 8; ii++)
	{
	_putchar(a[i][ii]);
	}
_putchar('\n');
}
}
