#include "holberton.h"

/**
 * _islower - checks for lower case character
 *
 * @c: holds the character for checking
 *
 * Return: 1 of c is lower, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
