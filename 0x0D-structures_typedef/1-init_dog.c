#include "dog.h"
/**
 * init_dog - Dog
 * @d: struct
 * @name: char
 * @age: floar
 * @owner: char
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
