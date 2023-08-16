#include "function_pointers.h"

/**
 * print_name - Function tha prints a name.
 * @name: Pointer to the name array.
 * @f: Function pointer.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
