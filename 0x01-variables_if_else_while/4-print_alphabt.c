#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 * followed by a new line, except q amd e
 * Return: 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);
	}
	putchar('\n');

	return (0);
}
