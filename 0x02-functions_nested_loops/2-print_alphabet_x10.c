#include "main.h"

/**
*print_alphabet_x10();
*
*Return: Don't return  anything, it is a print function no less no more. $
*/

void print_alphabet_x10(void)
{
	int i = 0;
	int c = 97;

	while (i < 10)
	{
		while ((c >= 97) && (c <= 122))
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
	return (0);
}
