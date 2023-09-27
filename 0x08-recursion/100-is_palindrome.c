#include "main.h"

/**
 * _strlen - Finds the stringlength using recursion
 * @s: srting
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(++s));
	}
}
/**
 * str_compare - compares two strings
 * @s: string
 * @l: smallest itetrator
 * @r: biggest iterator
 * Return: length of string
 */
int str_compare(char *s, int l, int r)
{
	if (l > r)
		return (0);
	else if (s[l] != s[r])
	{
		return (0);
	}
	else if (l == r && s[l] == s[r])
	{
		return (1);
	}
	else if (l == r - 1 && s[l] == s[r - 1])
	{
		return (1);
	}
	else
		return (str_compare(s, ++l, --r));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	return (str_compare(s, 0, _strlen(s) - 1));
}
