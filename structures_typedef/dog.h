#ifndef DOG
#define DOG
/**
*struct dog - a new type of data
*@name: name of dog
*@age: age of dog
*@owner: owner of dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
