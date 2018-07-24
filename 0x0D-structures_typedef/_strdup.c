#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory which contains a copy of
 * the string given as a parameter
 *
 * @str: string
 *
 * Return: NULL if string is null or if memory isnt avail
 * else returns pointer to dup string
 */

char *_strdup(char *str)
{
	char *pointer;
	int i, length;

	if (str == NULL)
	{
		return (NULL);
	}
	for (length = 0; str[length] != '\0'; length++)
		;
	pointer = malloc(sizeof(char) * length + 1);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		pointer[i] = str[i];
	}
	pointer[i] = '\0';
	return (pointer);
}
