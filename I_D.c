#include "main.h"

/*
 * Function naemd _numbers
 * Takes va_arg list as `arg` and a pointer `k` as input params
 * Function extracts an integer value from the va_arg list stores in `n`
 * Function prints the number `n` digit by digit using `_putchar`
 * Updates the pointer `k` to keep track of the number of characters printed
 */

int numbers(va_list arg, int *k)
{
	unsigned int i, p, r;


	/*
	 * Checks if number is negative by comparing it to 0
	 * if n is negative, the function prints a minus
	 * sets i to the absolute value of n
	 * otherwise sets i to n
	 */
	int n = va_arg(arg, int), num = 0;

	if (n < 0)
	{
		_putchar(('-'), k);
		i = n * -1;
	}; 
