#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - sum all parameters
* @n: number of parameters
* @...: optional parameters
* Return: the sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum, i;

	va_start(ap, n);
	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; ++i)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

