#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + 1))
	{
		if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
		{
			if (i == 0)
				*(s + 1) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + 1 - 1))
						*(s + 1) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
