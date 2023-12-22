#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - ENtry point
*
*Return: Always 0 if succeed
*/

int main(void)
{
	int  number[]= {95, 112, 117, 116, 99, 104, 97, 114}; 
	int i = 0;

	while (i != '\0')
	{
		_putchar(number[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
