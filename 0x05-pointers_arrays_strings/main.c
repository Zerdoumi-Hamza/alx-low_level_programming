#include <stdio.h>
#include "main.h"
#include "_putchar.c"
/**
* main- Entry part
*
*Return: Always 0.
*/

int _strlen(char *s)
{
	int i=0;

	while(*s)
	{
		*(s++);
		i++;
	}
	return (i);
}

void _puts(char *str)
{
	char x;
	while(*str)
	{
		x = *(str++);
		if (x >= 65 && x <= 90)
		{ 
			_putchar(x + 'A');
		}
		else if (x >= 97 && x <= 122)
		{
			_putchar(x + 'a');
		}
		else
		{
			_putchar(x);
		}
		*(str++);
	}
	_putchar('\n');
}
int main(void)
{
	int a = 10;
	int b = 5;
	char *str;
	int longueur; 
	
	str = "Hello_world";

	_puts(str);
	longueur = _strlen(str);	
	printf("the lengh of the str is:%d \n", longueur);
/**
	printf("str contain %p\n", str);
	printf(" Hello mean in Islame %s", Hello); 
	printf("the value of a is %d and the value of b is %d\n", a, b);
	printf("##############################\n");
	swap_int(&a, &b);
	printf("the value of a is %d and the value of b is %d\n", a, b);
	printf("##############################\n");
*/
	return (0);
}
