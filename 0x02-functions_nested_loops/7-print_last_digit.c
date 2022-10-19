#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @x: the number
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
	if (x % 10 < 0)
	{
		_putchar(((x % 10) * -(1)) + 48);
		return ((x % 10) * -(1));
	}
	_putchar((x % 10) + 48);
	return (x % 10);
}
