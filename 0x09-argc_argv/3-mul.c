#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - atoi
 * @argc: char
 * @argv: char
 * Return: 0
**/
int main(int argc, char *argv[])
{
if (argc > 2)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
else
{
printf("%s\n", "Error");
return (1);
}

return (0);
}
