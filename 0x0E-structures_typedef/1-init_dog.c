#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* init_dog - init a var struct dog.
* @d: pointer
* @name: pointer
* @age: age
* @owner: pointer
* Return: return
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
exit(1);
}
d->name = name;
d->age = age;
d->owner = owner;
}
