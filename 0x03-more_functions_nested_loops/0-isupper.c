#include "holberton.h"

/**
 * _isupper - checks for upper case letters
 *
 * @c: letter
 *
 * Return: 1 if caps otherwise 0
 */

int _isupper(int c)
{
	return (c > 64 && c < 91);
}
