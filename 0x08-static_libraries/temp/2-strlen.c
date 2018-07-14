#include "holberton.h"

/**
 * _strlen - checks for the length of the string
 *
 * @s: string to be checked
 *
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
