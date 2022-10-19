#include "main.h"
/**
 * times_table - prints 9 times tabke starting from 0
 * Return: 0
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z < 10 && y > 0)
			{
				_putchar(' ');
			}
			if (z >= 10)
			{
				_putchar(z / 10 + 48);
				_putchar(z % 10 + 48);
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(z + 48);
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
