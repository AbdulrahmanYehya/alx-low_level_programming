#include "main.h"
/**
 * _puts_recursion - is the same as puts();
 * Return: Always 0
 * @s: input
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
