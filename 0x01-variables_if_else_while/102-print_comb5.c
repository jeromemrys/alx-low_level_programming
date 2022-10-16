#include <stdio.h>
/**
 * main - prints possible combinations of 2digits
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z;
	int t;
	int a;
	int b;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				for (t = '0'; t <= '9'; t++)
				{
					a = (x * 10) + y;
					b = (z * 10) + t;

					if (a < b)
					{
						putchar(x);
						putchar(y);
						putchar(' ');
						putchar(z);
						putchar(t);

						if (x == '9' && y == '8' && z == '9' && t == '8')
							break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
