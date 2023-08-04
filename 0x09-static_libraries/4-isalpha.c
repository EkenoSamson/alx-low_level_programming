#include "main.h"

/**
  * _isalpha -  a function that checks for alphabet character.
  *
  * @c: the character.
  *
  * Return: 1 when success otherwise 0.
  *
  */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
