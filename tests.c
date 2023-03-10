#include "main.h"


/**
 * main- test _printf and its functions
 *
 * Return: Always return 0
*/
int main(void)
{
	putInt(321);
	_printf("abc");
	_printf("abc%d", 4);
	_printf("fgh%i", 9);
	return (0);
}