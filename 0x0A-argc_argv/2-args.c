#include <stdio.h>
#include "main.h"
/**
 * main - prints args that are recieved
 * @argc: numof arg
 * @argv: array of arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
