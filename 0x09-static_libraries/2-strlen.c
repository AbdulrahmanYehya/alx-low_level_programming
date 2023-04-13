#include "main.h"
/**
 * _strlen - lenght
 * @s: string value
 * Return: the length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
