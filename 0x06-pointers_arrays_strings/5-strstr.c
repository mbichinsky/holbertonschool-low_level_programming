#include "holberton.h"
#include "_strlen.c"

/**
 * _strstr - locates first occurence of a string in a 2nd string
 *
 * @haystack: string to be searched in
 *
 * @needle: string to be searched for
 *
 * Return: pointer of haystring at first occurance of needle or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i, match;

	while (*haystack != '\0')
	{
		match = 1;
		for (i = 0; needle[i]; i++)
		{
			if (*(haystack + i) != *(needle + i))
			{
				match = 0;
				break;
			}
  		}
		if (match == 1)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
