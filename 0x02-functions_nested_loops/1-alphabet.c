#include "main.h"

/**
 * print_alphabet - prints alpha in lowercase
 */
void print_alphabet(void) :
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);

	_putchar('\n');
	return (0);
}
