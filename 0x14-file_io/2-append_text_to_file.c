#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * append_text_to_file - First
 * @filename: Name of file
 * @text_content: size
 * Return: 1 if fine
**/
int append_text_to_file(const char *filename, char *text_content)
{
int f, i = 0;

f = open(filename, O_RDWR | O_APPEND);
if (text_content == NULL)
	return (1);
while (text_content[i])
	i++;
if (f == -1 || !filename)
	return (-1);
write(f, text_content, i);
close(f);

return (1);
}
