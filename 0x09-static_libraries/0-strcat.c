#include "main.h"
/**
 * _strcat - Still confused on what it does lol
 * @dest: input
 * @src: input as well
 * Return: no return, so void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	/*Empty line
	 */
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
