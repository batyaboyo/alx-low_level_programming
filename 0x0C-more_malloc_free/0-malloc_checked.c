#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Description: If memory allocation fails, cause normal process termination
 * with a status value of 98.
 *
 * Return: Upon ssuccess, return a pointer to the newly allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
