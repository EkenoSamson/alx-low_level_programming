#include "main.h"

/**
 * is_palindrome - checks palindrome
 *
 * @s: string to be checked
 *
 * Return: 1 if palindrome else 0
 *
 */

int _strlen_recursion(char *s);

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (_palindrome(s, length - 1));
}

/**
 * _palindrome - checks recursively based on length of string
 *
 * @string: the string
 * @index: indexing
 *
 * Return: 1 if palindrome else 0
 *
 */

int _palindrome(char *string, int index)
{
	if (index < 1)
		return (1);
	else if (*string == *(string + index))
		return (_palindrome(string + 1, index - 2));
	return (0);
}



