#include "holberton.h"
#include "_strlen.c"

/**
 * _strcat - concatenates two strings, replacing the \0
 * at the end of the first
 *
 * @dest: second string
 *
 * @src: first string
 *
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int i, deslen, srclen;

	deslen = _strlen(dest);
	srclen = _strlen(src);

	for (i = 0; i < srclen; i++)
	{
		dest[deslen + i] = src[i];
	}
	dest[deslen + srclen] = '\0';

	return (dest);
}
