#include "main.h"
/**
*leet - function that encode a strinfg into 1337
*@s: String
*Return: encoding string
*/

char *leet(char *s)
{
	int i = 0, j;
	char upper_[] = "AEOTL";
	char lower_[] = "aeotl";
	int number[] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		/*for (j = 0; j <= sizeof(number) / sizeof(int); j++)*/
		j = 0;
		while (upper_[j] != '\0')
		{
			if (s[i] == upper_[j] || s[i] == lower_[j])
				s[i] = number[j];
			printf("the char of upper_[%d] is %c\n", j, upper_[j]);
			j++;
		}
		i++;
	}
	printf("\n");
	return (s);
}
