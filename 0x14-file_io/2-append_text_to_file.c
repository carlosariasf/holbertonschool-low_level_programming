#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
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

if (text_content == NULL)
	return (1);
while (text_content[i])
	i++;
f = open(filename, O_RDWR | O_APPEND);
if (errno == EACCES)
	return (-1);
if (f == -1)
	return (-1);
printf("%d\n", i);
write(f, text_content, (i + 1));
close(f);

return (1);
}
