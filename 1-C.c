 #include "main.h"
 
/**
 * _char- print characters
 * @p: variable list
 * @k: Variable pointer
 * 
 * Return: Always return 1
 */
int _char(va_list p, int *k)
{
	int x = (char)va_arg(p, int);

	_putchar((x), k);

	return (1);
}
