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
	char str[] = "_putchar";
	int i = 0;

	while (i != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
