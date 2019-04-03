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
int fs, fd, rr;
char *buffer;

buffer = malloc(sizeof(char) * 1024);
if (ac != 3)
{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
}
fs = open(av[1], O_RDONLY);
if (fs == -1)
{
	dprintf(2, "Error: Can't read from file %s\n", av[1]);
	exit(98);
}
rr = read(fs, buffer, 1024);
if (rr == -1)
	return (0);
close(fs);

fd = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
if (fd == -1)
{
	dprintf(2, "Error: Can't write to %s\n", av[2]);
	exit(99);
}

return (0);
}
