#ifndef DOG_H
#define DOG_H
#include <stddef.h>


/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

