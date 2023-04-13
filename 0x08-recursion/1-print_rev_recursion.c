#include "main.h"
/**
 * _print_rev_recursion - prints a input but in recursion or backwards
 * @s: the string that is going to be printed as output
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
