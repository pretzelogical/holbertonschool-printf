#ifndef _PRINTF_H
#define _PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "_format_str_ch.h"
#include <stdio.h> /* Remove this before the final version*/

#define _PRINTF_BASE_BUFFER_SIZE 64

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _printf(const char *format, ...)
{
	va_list args;
	int formatLen;

	formatLen = _strlen(format);

	
}

/**
 * _print- Prints a string followed by
 * a newline to stdout;
 * @str: pointer to char array
 *
 * Return: Always return nothing (void)
 */
void _print(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
}

#endif
