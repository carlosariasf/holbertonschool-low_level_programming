#ifndef DOGC
#define DOGC
/**
 * struct dog - Object dog
 *@name: Name dog
 *@age: Age dog
 *@owner: Owner dog
 * Description: Object Dog
**/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
