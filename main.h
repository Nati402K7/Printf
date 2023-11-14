#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int character(va_list c);
int string(va_list s);
int _strlen(char *s);
int value(void);
int integer(va_list i);
int decimal(va_list d);

#endif
