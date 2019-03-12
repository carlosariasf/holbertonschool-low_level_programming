#include "dog.h"
#include <stdlib.h>
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
d = malloc(sizeof(dog_t));
if (d == NULL)
	return (NULL);

d->name = malloc(sizeof(char *));
if (d -> name == NULL)
{
	free(d->name);
	free(d);
	return (NULL);
}
	d->name = name;
d->age = age;
d->owner = malloc(sizeof(char *));
if (d ->owner == NULL )
{
	free(d->owner);
	free(d->name);
	free(d);
	return (NULL);
}
	d->owner = owner;

return (d);
}
