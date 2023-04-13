#include "main.h"
/**
 * _isalpha - checks input for letters
 * @c: input to be checked
 * Return: 1 is a letter and 0 is not a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
