#include <unistd.h>
/**
 * _putchar - write c to stdoubt
 * @c: c is the char to be printed
 * Return: true is 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
