#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * read_textfile - First
 * @filename: Name of file
 * @letters: size
 * Return: numer of char
**/
size_t read_textfile(const char *filename, size_t letters)
{

int f, rr, rw;
char *buffer;

buffer = malloc(sizeof(char) * letters);
f = open(filename, O_RDONLY);
if (f == -1)
	return (0);
rr = read(f, buffer, letters);
if (rr == -1)
	return (0);
close(f);
rw = write(STDOUT_FILENO, buffer, rr);
if (rw == -1)
	return (0);

return (rr);
}
