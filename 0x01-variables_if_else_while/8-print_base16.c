#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowescase
 * Return: 0
 */
int main(void)
{
	int x;
	char lc;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	for (lc = 'a'; lc <= 'f'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');

	return (0);
}
