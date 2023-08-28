#include "main.h"

/**
 * print_chessboard - this function prints a chessboard.
 * @a: this function accept a as the chessboard to be printed
 * Return: this function returns void.
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
