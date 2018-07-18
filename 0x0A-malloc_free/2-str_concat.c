#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: NULL on fail or empty string, else pointer to memory
 */

char *str_concat(char *s1, char *s2)
{
	int i, lens1, lens2;
	char *pointer;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;

	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;

	pointer = malloc(sizeof(char) * (lens1 + lens2));

	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens1 + lens2; i++)
	{
		pointer[i] = i < lens1 ? s1[i] : s2[i - lens1];
	}
	pointer[i] = '\0';
	return (pointer);
}
