#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: A pointer to the new dog,
 * or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char* owner)
{
	char *d_name, *d_owner;
	dog_t *d_ptr;

	d_ptr = malloc(sizeof(struct dog));
	if (d_ptr == NULL)
		return (NULL);

	while (*name != '\0')
	{
		*d_name = *name;
		d_name++;
		name++;
	}
	*d_name = '\0';

	while (*owner != '\0')
	{
		*d_owner = *owner;
		d_owner++;
		owner++;
	}
	*d_owner = '\0';

	d_ptr->name = d_name;
	d_ptr->age = age;
	d_ptr->owner = owner;

	return (d_ptr);
}
