#include "main.h"

/**
* wildcmp - compares two strings
* @s1: string 1
* @s2: string 2
*
* Description: wildcmp compares two strings and returns 1,
* if the strings can be considered identical otherwise,
* return 0
*
* Return: 1 (true), 0 (false)
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1++, s2++));
	else if (
	(*s1 == '*' && *(s1 + 1) == '\0')
	|| (*s2 == '*' && *(s2 + 1) == '\0')
	)
		return (1);
	else if (*s1 == '*' && *(s1 + 1) == *s2)
		return (wildcmp(s1++, s2));
	else if (*s2 == '*' && *(s2 + 1) == *s1)
		return (wildcmp(s1, s2++));
	else if (*s1 == '*' && *(s1 + 1) != *s2)
		return (wildcmp(s1, s2++));
	else if (*s2 == '*' && *(s2 + 1) != *s1)
		return (wildcmp(s2, s1++));
	else if (*s1 == '*' && *(s1 + 1) == '*')
		return (wildcmp(s1++, s2));
	else if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2++));
	else
		return (0);
}
