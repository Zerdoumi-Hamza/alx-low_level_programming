#include "main.h"

/**
*print_alphabet_x10 - Function that print ten time the alphabets letter;
*
*Return: Don't return  anything, it is a print function no less no more.
*/

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int c = 97;

		while ((c >= 97) && (c <= 122))
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
