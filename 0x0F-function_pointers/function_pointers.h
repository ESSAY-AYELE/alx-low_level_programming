#ifndef FUNC_H
#define FUNC_H
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array,unsigned int size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
