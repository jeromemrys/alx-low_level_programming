#include "main.h"

/**
 * malloc_checked - allocates a memory
 * @b: size
 * Return: the memory
 */
void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);

	return (str);
}
