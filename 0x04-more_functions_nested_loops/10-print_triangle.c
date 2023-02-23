#include "main.h"

/**
  * print_triangle -  a function that prints a triangle
  * @size: size of the triangle
  */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int base;
		int height;

		for (height = 1; height <= size; height++)
		{
			for (base = height; base < size; base++)
				_putchar(' ');
			for (base = 1; base <= height; base++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

