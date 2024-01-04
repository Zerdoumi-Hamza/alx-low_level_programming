#include <stdio.h>
#include "main.h"
#include "_putchar.c"
/**
* main- Entry part
*
*Return: Always 0.
*/

/* ##############################"" Dispaly fucntion ################  */
void Display(int Tab[], int size)
{
	int i = 0;

	while (i <= size)
	{
		printf("%d\t", Tab[i]);
		i++;
	}
	printf("\n");
}

/* #################################  My function ###########  */
void funciton(int *table, int size)
{
	int i;

	i = 0;
//	printf("The address of first element in table is %x\n", table);
//	printf("The address of first elemnet in tables &table[0] is %x\n", &table[0]);
	while (i <= size)
	{	
		table[i] = (*(table +i))*2;
		i++;
	}
}
		
/* #######################################  */
void rev_string(char *s)
{
        int i, lengh;
        char V;

        i = 0;
        lengh = _strlen(s);
	printf("The lengh is %d\n", lengh);
        while (lengh)
        {
                V = s[i];
                s[i] = s[lengh];
                s[lengh] = V;
                i++;
                lengh--;
		printf(" *****The Actual char in s is %d ****\n", s[i]);
		printf("The lengh from inside the while loop is %d\n", lengh);
        }
}
/* #####################################   */

int _strlen(char *s)
{
	int i=0;

	while(s[i])
	{
		i++;
	}
	return (i - 1);
}


/* ######################################## */
void print_rev(char *s)
{
        int lengh;

        lengh = _strlen(s);
        while(s[lengh])
        {
                _putchar(s[lengh]);
                lengh--;
        }
        _putchar('\n');
}

/* ####################################################### */
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

/*   ############################# main function ################  */
int main(void)
{
	int a = 10;
	int b = 5;
	int longueur; 
	char *str;
	char s[10] = "My school";
	int Tab[] = {1,2,3,4,5};
	int size;

	size = _strlen(Tab);
	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
			
	printf("##############  %s ###############\n", s);
	rev_string(s);
	printf("##############  %s ###############\n", s);
	printf("*************  Before ************\n");
	Display(Tab, size);
	printf("*************  After ************\n")
	
	_puts(str);
	print_rev(str);
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
