#include <stdio.h>
/**
 * main - prints alphabet in lower and upper case
 * Return: 0
 */
int main(void)
{
	char lc, uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (uc = 'a'; uc <= 'z'; uc++)
	{
		putchar(uc);
	}
	putchar('\n');
	return (0);
}
