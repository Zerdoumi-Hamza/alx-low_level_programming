#include <stdio.h>

/**
* main - the door of the programm.
*
*Return: 0 if anything goes as we expected
*/

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Kopar, 2015-10-19";
	char c = str[0];
	int i = 1;

	while (c != '\0')
	{
		putchar(c);
		c = str[i];
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
