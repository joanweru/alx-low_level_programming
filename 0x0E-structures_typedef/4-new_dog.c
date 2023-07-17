#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);
int string_length(char *c);
char *string_copy(char *dest, char *scp);
/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;

	int i, j;

	i = string_length(name);
	j = string_length(owner);

	if (name == NULL || owner == NULL)
		return (NULL);

	dawg = malloc(sizeof(dog_t));

	if (dawg == NULL)
		return (NULL);

	dawg->name = malloc(sizeof(char) * (i + 1));

	if (dawg->name == NULL)
	{
		free(dawg);
		return (NULL);
	}

	dawg->owner = malloc(sizeof(char) * (j + 1));
	if (dawg->owner == NULL)
	{
		free(dawg->name);
		free(dawg);
		return (NULL);
	}

	string_copy(dawg->name, name);
	string_copy(dawg->owner, owner);
	dawg->age = age;

	return (dawg);
}

/**
  * string_length - returns string length
  * @c: input string
  * Return: string length
  */
int string_length(char *c)
{
	int j = 0;

	while (c[j] != '\0')
		j++;

	return (j);
}

/**
 * string_copy - copies string pointed to by src
 * @dest: pointer to buffer where we'll copy the string
 * @scp: string to be copied
 * Return: pointer to the destination
 */
char *string_copy(char *dest, char *scp)
{
	int i;

	for (i = 0; scp[i] != '\0'; i++)
		dest[i] = scp[i];

	dest[i] = scp[i];
	return (dest);
}
