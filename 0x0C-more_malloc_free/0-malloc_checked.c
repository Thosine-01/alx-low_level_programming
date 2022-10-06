#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocae
 * Return: pointer to allocate memory or normal process terminate if error
 */
void *malloc_checked(unsigned int b);
{
	void *p;

	p = mallock(b);
	if (p == NULL)
		exit(98);
	return (p);
}
