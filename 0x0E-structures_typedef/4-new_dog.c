#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -This function  creates a new dog
 * @name: the name of dog
 * @age: The age of dog
 * @owner: The owner of dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int n, o, i;
dog_t *dog;

if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (n = 0; name[n]; n++)
;
n++;
dog->name = malloc(n *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < n; i++)
dog->name[i] = name[i];
dog->age = age;
for (o = 0; owner[o]; o++)
;
o++;
dog->owner = malloc(o *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < o; i++)
dog->owner[i] = owner[i];
return (dog);
}
