#include "dog.h"

/**
 * init_dog - function to initialize the dog structure.
 *
 * @d: pointer the dog object.
 * @name: name variable to be initialized.
 * @age: age variable to be initialized.
 * @owner: owner variable to be initialized.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
