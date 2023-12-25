#include "main.h"

/**
* print_triangle - a function print a triangle with # according to size enter it by user.
*@size: The size of triangel. 
*Return: No return.
*/

void print_triangle(int size)
{
	int i;
	int j;
	int k;
	
	if (size <= 0)
	{
		goto justnewline;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(32);
		}	
		for (k = j; k <= size; k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
justnewline:
	_putchar('\n');
}
