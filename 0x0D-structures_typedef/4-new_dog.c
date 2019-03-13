#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - description
 * @str: pointer
 *
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *str1;
	int leng;

	str1 = str;
	if (str != NULL)
	{
		for (leng = 0; str1[leng] != '\0'; leng++)
		{
		}
		leng = leng + 1;
		str1 = malloc(sizeof(char) * leng);
		if (str1 == NULL)
		{
			return (NULL);
		}
		else
		{
			for (leng = 0; str[leng] != '\0'; leng++)
				str1[leng] = str[leng];
			str1[leng] = str[leng];
			return (str1);
		}
	}
	return (NULL);
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

d = malloc(sizeof(dog_t));
if (d == NULL)
	return (NULL);

d->name = _strdup(name);
if (d->name == NULL)
{
	free(d);
}
d->age = age;
d->owner = _strdup(owner);
if (d->owner == NULL)
{
	if (d->name != NULL)
	{
	free(d->name);
	}
	free(d);
}

return (d);
}
