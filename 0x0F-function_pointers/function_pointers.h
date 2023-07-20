#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function prototype for the print_name function */
void print_name(char *name, void (*f)(char *));

/* Function prototype for the array_iterator function */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Function prototype for the int_index function */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
