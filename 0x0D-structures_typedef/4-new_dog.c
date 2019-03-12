#include "dog.h"
#include <stdlib.h>
/**
 * size_string - Array
 * @str: Size of array
 * Return: Size string
**/
int size_string(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
;
return (i);
}
/**
 * *new_dog - Dog
 * @ : struct
 * @name: char
 * @age: floar
 * @owner: char
 * Return: pointer
**/

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *d;
char *sname;
char *sowner;

d = malloc(sizeof(dog_t));
if (d == NULL)
	return (NULL);

sname = malloc(sizeof(char) * size_string(name) + 1);
if (sname == NULL)
{
	free(sname);
	free(d);
	return (NULL);
}
	sname = name;
	d->name = sname;
d->age = age;
sowner = malloc(sizeof(char) * size_string(owner) + 1);
if (sowner == NULL )
{
	free(sowner);
	free(d->name);
	free(d);
	return (NULL);
}
	sowner = owner;
	d->owner = sowner;

return (d);
