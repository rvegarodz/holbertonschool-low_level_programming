#include "main.h"
/**
 *
 *
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	
	i = 0;
	j = 0;

	for ( i = 0; i != '\0'; i++)
	{
		for ( j = 0; j != 0; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
