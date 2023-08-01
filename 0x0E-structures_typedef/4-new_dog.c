#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: A pointer to the new dog,
 * or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, name_len, owner_len;
	char *d_name, *d_owner;
	dog_t *d_ptr;

	d_ptr = malloc(sizeof(struct dog));
	if (d_ptr == NULL)
		return (NULL);

	name_len = strlen(name);
	d_name = malloc(sizeof(char) * name_len);
	if (d_name == NULL)
		return (NULL);
	for (i = 0; i < name_len; i++)
		d_name[i] = name[i];
	d_name[i] = '\0';

	owner_len = strlen(owner);
	d_owner = malloc(sizeof(char) * owner_len);
	if (d_owner == NULL)
		return (NULL);
	for (i = 0; i < owner_len; i++)
		d_owner[i] = owner[i];
	d_owner[i] = '\0';

	d_ptr->name = d_name;
	d_ptr->age = age;
	d_ptr->owner = owner;

	return (d_ptr);
}
