#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
