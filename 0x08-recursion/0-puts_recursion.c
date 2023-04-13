#include "main.h"
void _puts_recursion(char *s)
/**
 * _puts_recursion is the same as puts;
 * Return: Always 0
 */

{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
