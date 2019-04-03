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
if (ac != 3)
{
	dprintf(2, "Usage: %s filename text\n", av[0]);
	exit(1);
}

return (0);
}
