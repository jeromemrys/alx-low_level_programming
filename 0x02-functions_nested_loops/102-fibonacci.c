#include <stdio.h>
/**
 * main - prints firat 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int w, x, y, z, t;

	w = 1;
	x = 2;
	y = 0;

	for (t = 0; t < 33; t++)
	{
		if (w % 2 == 0 && w <= 4000000)
		{
			y = y + w;
		} else if (w > 4000000)
		{
			break;
		}
		z = w;
		w = x;
		x = z + w;
	}
	printf("%d\n", y);
	return (0);
}
