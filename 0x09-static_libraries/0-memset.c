#include "main.h"
/**
 * _memset - fills a memory block 
 * @s: start address
 * @b: value
 * @n: n of bits
 * Return: changes n bytes with a new array value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
