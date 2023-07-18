#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * str_len - Computes the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */
int str_len(char *str)
{
int length = 0;
while (str[length] != '\0')
length++;
return length;
}
/**
 * str_copy - Copies a string
 * @dest: The destination string
 * @src: The source string
 */
void str_copy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
/* Validate input parameters */
if (name == NULL || owner == NULL)
return (NULL);
/* Allocate memory for the dog structure */
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
/* Copy the name and owner strings */
new_dog->name = malloc(sizeof(char) * (str_len(name) + 1));
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
str_copy(new_dog->name, name);
new_dog->owner = malloc(sizeof(char) * (str_len(owner) + 1));
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
str_copy(new_dog->owner, owner);
/* Set the age of the dog */
new_dog->age = age;
return (new_dog);
}
