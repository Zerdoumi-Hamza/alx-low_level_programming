#include "main.h"
/**_puts - function prints a string.
*@str: pointer point to the value in adress of argument.
*
*Return: Nothing.
*/

void _puts(char *str)
{
	int i = 0;
	while(str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
