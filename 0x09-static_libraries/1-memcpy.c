#include "main.h"
/**
 *_memcpy - Copies the memory 
 *@dest: I think stored memory
 *@src: copied memory
 *@n: number of bits
 *Return: memroy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
