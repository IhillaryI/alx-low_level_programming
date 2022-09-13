
/**
* print_alphabet - prints the alphabets in lowercase.
* Description: prints the lowercase alphabets from a-z and then,
* a new line character
*/
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		++letter;
	}
	_putchar('\n');
	return (0);
}

