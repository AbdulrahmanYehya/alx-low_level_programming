#include "main.h"
void _puts_recursion(char *s)
/**
 * 0 is success
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
