#include <stddef.h>
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/**
 * _putchar - print character
 * @c: char to print
 * Return: char c (success)
 */
int _putchar(char c);
/**
 * print_name - print name
 * @name: pointer to string to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
