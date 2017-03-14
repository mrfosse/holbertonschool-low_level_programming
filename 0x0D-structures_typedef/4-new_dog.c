#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - measures the length of a string.
 * Descritpion: measures the string s.
 * @s: string to be messured/
 * Return: returns length of s.
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * new_dog - makes a new inits the dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog_t else NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *temp;
	int count;

	temp = malloc(sizeof(dog_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->name = malloc(_strlen(name) * sizeof(temp->name));
	if (temp == NULL)
		return (NULL);
	for (count = 0; count < _strlen(name); count++)
		temp->name[count] = name[count];

	temp->age = age;
	temp->owner = malloc(_strlen(owner) * sizeof(temp->owner));
	if (temp == NULL)
		return (NULL)
	for (count = 0; count < _strlen(owner); count++)
		temp->owner[count] = owner[count];
	return (temp);
}


