#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's information
 * @name: First member , a char pointer
 * @age: Second member, a float data type
 * @owner: Third member, a char pointer
 *
 * Description: Structure that contains a dog's info ; name, age and owner
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
