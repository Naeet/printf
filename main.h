#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _puts(const char *str);
int putchar(int c);
int putint(int n);
int print_number(unsigned int n);
int putbinary(unsigned int n);
int putuint(unsigned int n);
int putoctal(unsigned int n);
int puthex(unsigned int n, int uppercase);
int putstr_non_printable(const char *str);
int putptr(void *ptr);
int putstr_reversed(const char *str);
int putstr_rot13(const char *str);
int rotate_13(int c);

#endif
