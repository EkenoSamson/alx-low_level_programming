#include "main.h"


/**
 * is_palindrome - checks for palindromic nature
 * @s: string to check
 *
 * Return: 1 if it is a a palindrome string, 0 it's not
 *
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	if (len <= 0)
		return (1);
	return (_palindrome(s, len));
}


/**
 * _palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 *
 */
int _palindrome(char *s, int len)
{
	if (*s == *(s + len))
		return (_palindrome(s + 1, len - 1));
	return (0);
}
