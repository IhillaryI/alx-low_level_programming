#ifndef DOG_H
#define DOG_H


/**
* struct dog - identifies a dog
* @name: dog name
* @age: dog age
* @owner: dog owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

/**
* dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
