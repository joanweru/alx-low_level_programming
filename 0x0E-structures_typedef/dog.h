#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic dog description
 * @name: first element(dog's name)
 * @age: second element (dog's age)
 * @owner: third element(dog's owner)
 * Description: data structure of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif



