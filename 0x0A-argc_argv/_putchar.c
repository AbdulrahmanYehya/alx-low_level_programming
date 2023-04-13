#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes c 
 * @c: c to print
 * Return: 1 is true and 0 is false
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
