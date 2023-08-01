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
	dog_t *d_ptr;

	d_ptr = malloc(sizeof(struct dog));
	if (d_ptr == NULL)
	{
		free(d_ptr);
		return (NULL);
	}

	name_len = strlen(name);
	d_ptr->name = malloc(sizeof(char) * name_len + 1);
	if (d_ptr->name == NULL)
	{
		free(d_ptr);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		d_ptr->name[i] = name[i];
	d_ptr->name[i] = '\0';

	owner_len = strlen(owner);
	d_ptr->owner = malloc(sizeof(char) * owner_len + 1);
	if (d_ptr->owner == NULL)
	{
		free(d_ptr);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		d_ptr->owner[i] = owner[i];
	d_ptr->owner[i] = '\0';
	d_ptr->age = age;
	return (d_ptr);
}
