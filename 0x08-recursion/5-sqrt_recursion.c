#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - gives root of said number
 * @n: number to get the root of
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - finds square root of a number using recursion
 * @n: number to get square root of
 * @i: reiterate
 * Return: returns square root of inputed number
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
