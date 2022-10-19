#include "main.h"

/**
 * _islower - check for uppercase
 * @c: the character to check
 * Return: 0 and 1
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
