#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: pointer to array of chars
* i.e a 2D-array
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
			_putchar(a[i][j++]);
		_putchar('\n');
		++i;
	}
}
