#include "holberton.h"
#include "_strlen.c"

/**
 * _memcpy - copies the memory area
 *
 * @n: bytes to be copied
 *
 * @dest: second string
 *
 * @src: first string
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++);
	{
		dest[i] = src[i];
	}
	return (dest);
}
