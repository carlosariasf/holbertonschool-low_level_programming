#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @ac: int
 * @av: array
 *
**/
void main(int ac, char *av[])
{
int i = atoi(av[1]), j;

if (av)
{
if (i <= 0)
{
	printf("Error\n");
	exit(2);
}
else if (ac != 2)
{
	printf("Error\n");
	exit(1);
}
}
}
