#include "holberton.h"

/**
 * _strlen_recursion - checks for the length of the string
 *
 * @s: string to be checked
 *
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return ('\0');
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * char_test - compares the start and end characters
 *
 * @start: start of the string
 *
 * @end: end of the string
 *
 * @s: string
 *
 * Return: 1 if palindrome, else 0
 */

int char_test(int start, int end, char *s)
{
	if (s[start] != s[end])
	{
		char_test(start + 1, end - 1, s);
		return (0);
	}
	else
	{
		return (1);
	}
	if (start > end)
	{
		return (0);
	}
}

/**
 * is_palindrome - checks if string is palindrome or not
 *
 * @s: string to be checked
 *
 * Return: 1 if yes, 0 if no
 */

int is_palindrome(char *s)
{
	int start = 0;
	int end = _strlen_recursion(s) - 1;

	return (char_test(start, end, s));
}
