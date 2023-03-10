#ifndef _FORMAT_STR_CH_H
#define _FORMAT_STR_CH_H

#include "main.h"


/**
 * _strlen- returns the length of a string
 * @s: string to check length of
 *
 * Return: Always return length of string
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*(s + l) != '\0')
		l++;

	return (l);
}

/**
 * _const_strlen- returns the length of a 
 * constant string
 * @s: string to check length of
 *
 * Return: Always return length of string
 */
int _const_strlen(const char *s)
{
	int l;

	l = 0;
	while (*(s + l) != '\0')
		l++;

	return (l);
}



#endif
