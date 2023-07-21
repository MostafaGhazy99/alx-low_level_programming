#ifndef CALC_H
#define CALC_H

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

/* Function prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */

