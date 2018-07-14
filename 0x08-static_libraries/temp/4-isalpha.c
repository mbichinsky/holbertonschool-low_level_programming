#include "holberton.h"

/**
 * _isalpha - checks for alphabet character
 *
 * @c: holds the character for checking
 *
 * Return: 1 of c is lower, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
