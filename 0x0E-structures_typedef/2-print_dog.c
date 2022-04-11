#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Print the elements of variable of type struct dog.
 * @d: Variable to print it's elements.
 **/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s", d->name);
		else
			printf("Name: (nil)");
		printf("\n");
		printf("Age: %f", d->age);
		printf("\n");
		if (d->owner != NULL)
			printf("Owner: %s", d->owner);
		else
			printf("Owner: (nil)");
		printf("\n");
	}
}
