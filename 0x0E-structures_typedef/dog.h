#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog -this structure contains several
 * attributes of a dog
 * @name: this attribute specifies the name of the dog
 * @age: this attribute specifies the age of the dog
 * @owner: this attribute specifies the name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - using typedef with struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /* DOG_H */
