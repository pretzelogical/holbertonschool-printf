#include "main.h"

#define _PRINTF_BUFFER_SIZE 2048

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}

/**
 * _printf- writes a formatted character string
 * to stdout
 * @format: string with 0 or more directives
 *
 * Return: number of characters printed (minus null
 * byte)
*/
int _printf(const char *format, ...)
{
	va_list args;
	char *out;
	int length;

	out = (char *) malloc(_PRINTF_BUFFER_SIZE);

	if (out == NULL)
		return (0);
	
	length = _sprintf(out, format, args);
	printf("%d\n", length);
	printf("%s\n", out);

	free(out);

	return (0);
	
}

/**
 * _sprintf- formats a string and copys it to the str
 * buffer
 * @str: buffer to copy to
 * @format: string with zero or more directives
 *
 * Return: Number of characters in new string (minus null
 * terminator)
*/
int _sprintf(char *str, const char *format, va_list args)
{
	int length;

	printf("Made it to _sprintf!\n");

	for (length = 0; *(format + length) != '\0'; length++)
		str[length] = *(format + length);
	
	return (length);
}

/**
 * _print- Prints a string to stdout.
 * @str: pointer to char array
 *
 * Return: number of characters printed
 */
int _print(char *str)
{
	int printed;

	printed = 0;
	while (*(str + printed) != '\0')
	{
	_putchar(*(str + printed));
	printed++;
	}
	return (printed);
}
