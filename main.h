#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>


/*Prototypes*/

int _numbers(va_list arg, int *k);
int _putchar(int c);
int _printf(const char *format, ...);
int _char(va_list p, int *k);
int _string(va_list p, int *k);


#endif
