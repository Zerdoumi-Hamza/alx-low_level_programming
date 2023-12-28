#include <stdio.h> 

/**
*main - Entry part
*
*Return: always 0 if succeed.
*/

int main(void)
{
	long int n  = 612852475143;
	int i;
	
	while (n != 1)
	{
		for ( i = 2; n <= n; i++)
		{
			if (n % i == 0)
			{
				n = n / i;
				break;
			}
		}
	}
	printf("%d",i);
	printf("\n");
	return (0);
}
