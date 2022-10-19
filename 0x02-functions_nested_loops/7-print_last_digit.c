#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @x: the number
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
	int ld = x % 10;

	if (ld < 0)
	{
		ld = ld * -1;
		_putchar(ld + '0');
	}
	return (0);
}
