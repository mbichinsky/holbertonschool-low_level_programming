#include "holberton.h"
#include "_strlen.c"

/**
 * _strncat - concatenates 2 strings using n bytes from src
 *
 * @dest: destination string, src will go at the end
 *
 * @src: source string
 *
 * @n: number of characters to be copied
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, deslen, srclen;

	deslen = _strlen(dest);
	srclen = _strlen(src);

	for (i = 0; i < n && i < srclen; i++)
	{
		dest[deslen + i] = src[i];
	}
	dest[deslen + srclen] = '\0';

	return (dest);
}
