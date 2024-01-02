#include <stdio.h>
#include "main.h"

/** 
* main- Entry part
*
*Return: Always 0.
*/

int main(void)
{
	int n = 20;
	int *ip = &n;
	
	printf("####################################\n");	
	reset_to_98(&n);
	printf("#####################################\n");
	printf("The address of the variable n in memory through\
the pointer is acctually in ip variable :%p\n", ip);
	printf("##########################\n");
	printf("After operation in ip variable that containe the\
address of n, with using* the variable n = %d\n", n);
	printf("##########################\n");
	return (0);
}
