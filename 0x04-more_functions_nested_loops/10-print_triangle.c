#include "main.h"

/**
* print_triangle - print triangle, followed by a new line
* @size: the size of the triangle
*/
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			if (j < (size - 1 - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
