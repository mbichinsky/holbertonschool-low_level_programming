#include "holberton.h"
#include "2-strchr.c"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string to be searched
 *
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s && _strchr(accept, *s++))
	{
		i++;
	}
	return (i);
}
