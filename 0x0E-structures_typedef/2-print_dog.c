#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog with the elements initialized
 *           - if an element is empty, print (nil)
 *           - if d is NULL, print nothing
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil\n)");
	if (d->age)
		printf("Age: %.6f\n", d->age);
	else
		printf("Age: (nil\n)");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
