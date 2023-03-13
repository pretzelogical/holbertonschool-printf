 #include "main.h"
/** 
 * Function _char
 * variable list @ va_list p
 * Variable pointer @ int *k
 */

int _char(va_list p, int *k)
{
	int x = (char)va_arg(p, int);

	_putchar((x), k);

	return (1);
}
