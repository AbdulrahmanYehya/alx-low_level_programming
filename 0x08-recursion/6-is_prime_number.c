#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - checks if number is prime or not
 * @n: number
 * Return: 1 if prime and 0 if not prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
