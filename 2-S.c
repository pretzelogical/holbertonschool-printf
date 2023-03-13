#include "main.h"
/** 
 * Function @ _string 
 * Variable list @ va_slist p
 * Variable pointer @ int *k
*/
int _string(va_list p, int *k)
{
	int i = 0;
	char *s;

	s = va_arg(p, char*);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i] != '\0')
	{
		_putchar((s[i]), k);
		i++;
	}
	return (i);
}
