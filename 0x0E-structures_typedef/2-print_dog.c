#include <stdio.h>
#include "dog.h"
/**
 * print_dog-prints a struct dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("name: %s\n", (d->name != NULL) ? d->name : ("nil"));
	printf("age: %2f\n", d->age);
	printf("owner: %s\n",  (d->owner != NULL) ? d->owner : ("nil"));


}
