#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc with b bytes
 * @b: unsigned int of bytes to be allocated memory
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(b);
	if (ret == NULL)
	{
		free(ret);
		exit(98);
	}
	return (ret);
}
