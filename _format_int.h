#ifndef FORMAT_INT_H
#define FORMAT_INT_H

#include "_printf.h"

/**
 * _pow- get x raised to power y
 * @x: number to  n get power of
 * @y: power to raise to
 *
 * Return: x^y
*/
int _pow(int x, int y)
{
	int num;
	num = x;
	while (y > 1)
	{
		x *= num;
		y--;
	}
	return (x);
}

/**
 * countPlaces- count the total amount of places
 * in a given int
 * @x: int to count places of
 *
 * Return: places in int
*/
int countPlaces(int x)
{
	int count;
	count = 0;

	while (x != 0)
	{
		x /= 10;
		count++;
	}
	return (count);
}

/**
 * putInt- prints an int of any size to stdout
 * @x: int to print
 *
 * Return: void return
*/
void putInt(int x)
{
	int places;

	if (x < 0)
	{
		_putchar('-');
		x *= -1;
	}
	/* Remember to remove newlines in the full program! */
	places = countPlaces(x);
	if (places == 1)
	{
		_putchar('0' + x);
		_putchar('\n');
		return;
	}
	while (places > 0)
	{
		if (places > 1)
		{
			_putchar('0' + (x / _pow(10, places - 1) % 10));
		}
		else
		{
			_putchar('0' + (x % 10));
		}
		places--;
	}
	_putchar('\n');
	return;
}

#endif
