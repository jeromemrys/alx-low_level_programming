#include <stdio.h>
/**
 * main - fibonacci number
 * Return: 0
 */
int main(void)
{
	unsigned long int w, x, y, z;

	w = 1;
	x = 2;

	for (z = 0; z < 50; z++)
	{
		if (z < 49)
		{
			printf("%lu, ", w);
		} else
		{
			printf("%lu", w);
		}
		y = w;
		w = x;
		x = y + w;
	}
	printf("\n");
	return (0);
}
