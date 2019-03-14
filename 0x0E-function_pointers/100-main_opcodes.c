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
int i = atoi(av[1]);

if (ac == 2)
{
	printf("%01x\n", i);
}
else if (i < 0)
{
	printf("Error\n");
exit(1);
}
else
{
	printf("Error\n");
	exit(2);
}

}
