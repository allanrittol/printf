#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_format(const char *format, va_list args);
int print_binary(unsigned int num);
int print_binary_digits(int binary[], int size);

#endif
