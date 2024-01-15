#include "main.h"
/**
*leet - function that encode a strinfg into 1337
*@s: String
*Return: encoding string
*/

char *leet(char *s)
{
	int i = 0, j;
	char upper_lower[] = "AEOTLaeotl";
	int number[] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		/*for (j = 0; j <= sizeof(number) / sizeof(int); j++)*/
		j = 0;
		while (upper_lower[j] != '\0')
		{
			if (s[i] == upper_lower[j])
				s[i] = number[j];
			j++;
		}
		i++;
	}
	printf("\n");
	return (s);
}
