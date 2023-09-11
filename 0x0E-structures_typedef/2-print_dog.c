#include "dog.h"

/**
 * print_dog - this function prints a struct dog
 * @d: this field is a pointer to the struct dog to print
 * Return: this function returns void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
