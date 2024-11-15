#include "dog.h"
#include <stddef.h>
/**
* init_dog - initializes a structure of type dog
* @d: pointer to the dog to initialize
* @name: name of the dog
* @age: age of the dog
* @owner: name of the dog's owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
