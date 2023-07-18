#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * str_len - Calculates the length of a string
 * @str: The string
 * Return: The length of the string
 */
int str_len(char *str)
{
int len = 0;
while (str[len] != '\0')
len++;
return len;
}

/**
 * str_copy - Copies a string to a newly allocated memory
 * @dest: The destination buffer
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
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int name_len, owner_len;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return NULL;
name_len = str_len(name);
owner_len = str_len(owner);
new_dog->name = malloc(sizeof(char) * (name_len + 1));
if (new_dog->name == NULL)
{
free(new_dog);
return NULL;
}
new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return NULL;
}
str_copy(new_dog->name, name);
str_copy(new_dog->owner, owner);
new_dog->age = age;
return new_dog;
}
