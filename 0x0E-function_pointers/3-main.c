#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - main
* @ac: int
* @av: pointer
* Return: num
**/
int main(int ac, char *av[])
{
int i, j;
char a;
if (ac != 4)
{
	printf("Error\n");
	exit(98);
}
i = atoi(av[1]);
a = *av[2];
j = atoi(av[3]);
if (a != '+' && a != '-' && a != '*' && a != '/' && a != '%')
{
	printf("Error\n");
	exit(99);
}
if (*av[2] == '%' || *av[2] == '/' && i == 0 || j == 0)
{
	printf("Error\n");
	exit(100);
}
printf("%d, %c, %d\n", i, a, j);

return (0);
}
