#include <stdio.h>
/**
 * main - sum of multiples
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			y = y + x;
		}
	}
	printf("%d\n", y);
	return (0);
}
