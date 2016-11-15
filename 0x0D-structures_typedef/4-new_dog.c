#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - makes a new inits the dog structure
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog_t else NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *temp;

	temp = malloc(sizeof(dog_t));

	if (temp != NULL)
	{
		temp->name = name;
		temp->age = age;
		temp->owner = owner;
		return (temp);
		free(temp->name);
		free(temp->owner);
		free(temp);
	}
	else
	{
		free(temp->name);
		free(temp->owner);
		free(temp);
		return (NULL);
	}
}
