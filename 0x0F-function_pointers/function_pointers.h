#ifndef function_pointers_h
#define function_pointers_h
#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);


#endif