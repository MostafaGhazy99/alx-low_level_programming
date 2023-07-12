#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int s1_length = 0, s2_length = 0, concat_length = 0;
unsigned int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[s1_length] != '\0')
s1_length++;
while (s2[s2_length] != '\0')
s2_length++;
concat_length = s1_length + s2_length;
concat = malloc(sizeof(char) * (concat_length + 1));
if (concat == NULL)
return (NULL);
for (i = 0; i < s1_length; i++)
concat[i] = s1[i];
for (j = 0; j < s2_length; j++)
concat[i + j] = s2[j];
concat[concat_length] = '\0';
return (concat);
}
