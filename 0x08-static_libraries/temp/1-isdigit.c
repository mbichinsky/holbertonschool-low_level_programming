#include "holberton.h"

/**
 * _isdigit - checks for number 0-9
 *
 * @c: holds the character for checking
 *
 * Return: 1 of c is a digit 0-9, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
