#include "holberton.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: number of characters to copy
 *
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
