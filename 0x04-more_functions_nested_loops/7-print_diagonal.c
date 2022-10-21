#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: length of diaginal line
 * Return: 0
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (x = 0; x < n; x++)
		{
			y = x;
			while (y >= 0)
			{
				if (y == 0)
				{
					_putchar('\\');
				} else
				{
					_putchar(' ');
				}
				y--
			}
			_putchar('\n');
		}
	}
}
