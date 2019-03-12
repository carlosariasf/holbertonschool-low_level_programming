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
char *sname;
char *sowner;

d = malloc(sizeof(dog_t));
if (d == NULL)
	return (NULL);

sname = _strdup(name);
if (sname == NULL)
{
	free(d);
	return (NULL);
}
	d->name = sname;
d->age = age;
sowner = _strdup(owner);
if (sowner == NULL )
{
	free(d->name);
	free(d);
	return (NULL);
}
	d->owner = sowner;

return (d);
}
