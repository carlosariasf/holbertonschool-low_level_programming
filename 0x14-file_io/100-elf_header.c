#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @ac: Number of args
 * @av: Pointer to args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
int file;

if (ac != 3)
{
	file = open(av[1], O_RDONLY);
	if (file == -1)
		return (-1);
}

return (1);
}
