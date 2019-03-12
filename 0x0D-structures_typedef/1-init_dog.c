#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Dog
 * @d: struct
 * @name: char
 * @age: floar
 * @owner: char
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (name != NULL)
	d->name = name;
else
	d->name = "";
if (age != age)
	d->age = 0.0;
else
	d->age = age;
if (owner != NULL)
	d->owner = owner;
else
	d->owner = "";
}
