#ifndef DOG2
#define DOG2
int _putchar(char c);

/**
 * dog - my first stuct
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns the dog.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog( char *name, float age, char *owner);

#endif
