#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - Dog
 * @ : struct
 * @name: char
 * @age: floar
 * @owner: char
**/
dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *d;
d = malloc(sizeof(dog_t));
if (d == NULL)
	free(d);
	return (NULL);
if (name != NULL)
	d->name = name;
if (age != age)
{
}
else
{
	d->age = age;
}
if (owner != NULL)
	d->owner = owner;


return (d);
}
