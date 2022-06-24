#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines dog traits
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: This structure gives a dog's name, age, and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* function prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *pwner);
void free_dog(dog_t *d);

#endif
