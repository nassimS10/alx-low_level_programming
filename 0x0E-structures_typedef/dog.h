#ifndef DOG_H
#define DOG_H
/**
*struct dog - a struct
*@name: name
*@age: age
*@owner: owner
*description: dog struct
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_h;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endiff