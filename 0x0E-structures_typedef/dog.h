#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
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

#endif
