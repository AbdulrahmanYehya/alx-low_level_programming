#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes c to stod
 * @c: c to print
 * Return: 1 is ok
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
