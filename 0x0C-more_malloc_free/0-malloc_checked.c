#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - changes memeory using mallloc
 * @b: n of bits to move
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
