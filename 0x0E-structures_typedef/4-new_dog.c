#include "dog.h"
#include <stdlib.h>

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * *new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *name_cpy;
	char *owner_cpy;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	_strcopy(name_cpy, name);

	if (!name_cpy && name)
	{
		free(new);
		return (NULL);
	}

	_strcopy(owner_cpy, owner);

	if (!owner_cpy && owner)
	{
		free(name_cpy);
		free(new);
		return (NULL);
	}

	new->name = name_cpy;
	new->age = age;
	new->owner = owner_cpy;

	return (new);
}
