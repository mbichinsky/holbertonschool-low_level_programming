#include "holberton.h"
#include "2-strlen.c"

/**
 * _strcpy - copies the string from src to dest
 *
 * @dest: destination string
 *
 * @src: sorce string
 *
 * Return: destination string
 */

char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i;

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
