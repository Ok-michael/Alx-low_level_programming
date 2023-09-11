#include "dog.h"

/**
 * _strdup - this function creates a new array containing a
 * copy of the given string
 * @str: this is a pointer to the string to copy
 * Return: this function NULL if str is NULL or if memory allocation
 * fails, otherwise a return a pointer to the new copy
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;
		dup = malloc(sizeof(char) * size);
		if (dup)
		{
			while (size--)
				dup[size] = str[size];

			return (dup);
		}
	}
	return (NULL);
}

/**
 * new_dog - this function creates a new dog
 * @name: this field is the new dog's name
 * @age: this field is the new dog's age
 * @owner: this field is the new dog's owner
 * Return: this function returns a pointer to the new dog, or
 * NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	if (name)
	{
		d->name = _strdup(name);
		if (!(d->name))
		{
			free(d);
			return (NULL);
		}
	}
	else
		d->name = NULL;

	d->age = age;

	if (owner)
	{
		d->owner = _strdup(owner);
		if (!(d->owner))
		{
			free(d->name);
			free(d);
			return (NULL);
		}
	}
	else
		d->owner = NULL;

	return (d);
}
