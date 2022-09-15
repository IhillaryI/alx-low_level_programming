#include "main.h"

/**
* _isupper - checks for uppercase characters
* @c: argument to check
* Return: 1 if c is uppercase (Success), 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}