#include <stdio.h>
#include "main.h"
#include "_putchar.c"
/**
* main- Entry part
*
*Return: Always 0.
*/
void _puts(char *str)
{
        int i = 0;
        while(str[i])
        {
                _putchar(str[i]);
                i++;
        }
	_putchar('\n');
}


int _strlen(char *s)
{
	int i=0;
	while(s[i])
	{
		i++;
	}
	return (i);
}

int main(void)
{
	int a = 10;
	int b = 5;
	int longueur; 
	char *str;
	
	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
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
