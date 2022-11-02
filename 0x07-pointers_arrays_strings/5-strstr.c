#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 * Return: char value
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}
	return ('\0');
}
