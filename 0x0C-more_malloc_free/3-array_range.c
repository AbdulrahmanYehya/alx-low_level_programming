#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates array on ints
 * @min: minimum range
 * @max: maximum range
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
