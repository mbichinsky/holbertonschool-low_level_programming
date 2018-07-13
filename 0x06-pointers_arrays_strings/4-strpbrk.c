#include "holberton.h"
#include "2-strchr.c"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *
 * @s: string to be scanned
 *
 * @accept: string containing the characters to match
 *
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (s++)
	{
		if (_strchr(accept, *s))
		{
			return (s--);
		}
	}
	return (0);
}
