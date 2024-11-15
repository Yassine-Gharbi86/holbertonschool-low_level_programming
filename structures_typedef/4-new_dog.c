#include "dog.h"
#include <stdlib.h>
/**
* new_dog - creates a new dog
* @name: Name of the dog
* @age: age of dog
* @owner: Name of the dog's owner
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int nl, ol, i;
dog_t *d;

nl = ol = 0;
while (name[nl])
nl++;
while (owner[ol])
ol++;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
d->name = malloc(sizeof(char) * (nl + 1));
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->owner = malloc(sizeof(char) * (ol + 1));
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (i = 0; i < nl; i++)
d->name[i] = name[i];
d->name[i] = '\0';
for (i = 0; i < ol; i++)
d->owner[i] = owner[i];
d->owner[i] = '\0';
d->age = age;
return (d);
}
