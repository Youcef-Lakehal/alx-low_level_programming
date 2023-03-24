#include "main.h"

/**
 * print_triangle - entry point
 * owned by Bwave/Bright Daniel
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, base;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (base = 1; base <= size; base++)
			{
				if((row + base) <= size)
					_putchar(' ')
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
