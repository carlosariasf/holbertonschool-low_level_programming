#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * create_file - First
 * @filename: Name of file
 * @text_content: size
 * Return: 1 if fine
**/
int create_file(const char *filename, char *text_content)
{
int f, i = 0;

if (text_content == NULL)
	return (1);
while (text_content[i])
	i++;
f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (f == -1 || !filename)
	return (-1);
write(f, text_content, i);
close(f);

return (1);
}
