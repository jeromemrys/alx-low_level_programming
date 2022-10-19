#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10x and a new line
 * Returm: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char lc;

	for (i = 1; i <= 10; i++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			_putchar(lc);
		}

		_putchar('\n');
	}
}
