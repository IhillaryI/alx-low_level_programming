#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - prints a name
* @name: the name to print
* @f: a function to print the name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
	else
		printf("%s\n", "Error");
}
