#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, ol, nl;
	dog_t *new;

	if (name == NULL || owner == NULL)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	new->name = malloc(sizeof(char) * nl);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		new->name[i] = name[i];

	new->age = age;

	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	new->owner = malloc(ol * sizeof(char));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		new->owner[i] = owner[i];

	return (new);
}
