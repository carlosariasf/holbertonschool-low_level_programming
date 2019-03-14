#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @ac: int
 * @av: array
 * Return: int
**/
int main(int ac, char *av[])
{
if (ac != 2)
{
	printf("Error\n");
	exit(1);
}
else if (atoi(av[1]) < 0)
{
	printf("Error\n");
	exit(2);
}

return (0);
}
