#include "main.h"

/**
* print_alphabet_x10 - prints lowercase alphabets x10
* Description: Accepts no argument and prints the lowercase alphabet,
* from a to z, 10 times
*/
void printf_alphabet_x10(void)
{
	int count;
	char letter;

	count = 0;
	letter = 'a';

	while (count < 10)
		while (letter <= 'z')
			_putchar(letter);

		_putchar('\n');
}