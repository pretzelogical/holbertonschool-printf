#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>


/*Prototypes*/
int _pow(int x, int y);
int countPlaces(int x);
void putInt(int x);
int _strlen(char *s);
int _const_strlen(const char *s);
int _numbers(va_list arg, int *k);
int _putchar(int c);
int _printf(const char *format, ...);
int _sprintf(char *str, const char *format, va_list args);
int _print(char *str);


#endif
