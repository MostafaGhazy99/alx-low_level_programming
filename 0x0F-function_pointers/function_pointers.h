#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function prototype for the print_name function */
void print_name(char *name, void (*f)(char *));

/* Function prototype for the array_iterator function */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Function prototype for the int_index function */
int int_index(int *array, int size, int (*cmp)(int));

/* Struct op */
/**
 * struct op - Struct that represents an operation.
 * @op: The operator symbol (e.g., "+", "-", "*", "/", "%").
 * @f: A pointer to the corresponding function for the operation.
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

/* Function prototypes for calculator program */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* FUNCTION_POINTERS_H */
