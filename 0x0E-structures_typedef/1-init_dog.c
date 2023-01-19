#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that intializes a variable of type struct dog
 * @d: intialize variable of type struct dog
 * @name: First member (char variable)
 * @age: Second member (float variable)
 * @owner: Third member (char variable)
 *
 * Description: Long description.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
