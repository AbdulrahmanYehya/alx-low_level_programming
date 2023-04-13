#include "main.h"
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s1 != '\0' && *s1 == '*')
		{
			return (wildcmp(s1 + 1));
		}
		return (*s1 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
