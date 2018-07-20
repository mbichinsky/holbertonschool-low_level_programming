#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: bytes to be copied
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, lens1, lens2;
	char *pstring;

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

	if (n >= lens2)
	{
		n = lens2;
	}

	pstring = malloc(lens1 + n + 1);

	if (pstring == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lens1 + n; i++)
	{
		if (i < lens1)
		{
			pstring[i] = s1[i];
		}
		else
		{
			pstring[i] = s2[i - lens1];
		}
	}

	pstring[i] = '\0';
	return (pstring);
}
