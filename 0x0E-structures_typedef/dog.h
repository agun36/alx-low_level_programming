#ifndef DOG
#define DOG

/**
 * struct dog - dog object
 * @age: First member
 * @name: Second member
 * @owner: Third member
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/*Define a new type dog_t as a new name for the type struct dog.*/

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
