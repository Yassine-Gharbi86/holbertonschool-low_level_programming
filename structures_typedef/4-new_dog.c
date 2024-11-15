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
dog_t *dog;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = name;
dog->age = age;
dog->owner = owner;
return (dog);
}
