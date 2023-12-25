#include <stdio.h>

/**
* main - programme print numbers from 1 to 100 with new line at the end
* but insted of the number multiple of three we write Fizz anf the
* number multiple of five we werite Buzz if the number is multiple
* of both of them we write FizzBuzz.
*Return: 0 if succeed.
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
