#include "main.h"

/**
*swap_int - funcition swap the value of their arguments
*@a: first parameter.
*@b: second parameter.
*Return: Nothing.
*/

void swap_int(int *a, int *b)
{
	int vid;

	vid = *a;
	*a = *b;
	*b = vid;
}
