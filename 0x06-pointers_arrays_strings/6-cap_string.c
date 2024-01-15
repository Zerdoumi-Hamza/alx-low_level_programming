#include "main.h"

/**
*cap_string - function capitalize all words of a string.
*@s: string to capitalize.
*Return: the capitalizing string.
*/

char *cap_string(char *s)
{
	int cap [] = {32, 33, 34, 40, 41, 44, 46, 123, 125};
	 int i = 0, j = 0;
	while (s[i] != '\0')
	{
		/*for (j = 0; j < sizeof(cap) / sizeof(int); j++)*/
		while (cap[j] != '\0')
		{
			if (((int)s[i] == cap[j]) ||  (s[i] == '\n' || s[i] == '\t'))
			{
				if ((int)s[i + 1] >= 97 && (int)s[i + 1] <= 122)
					s[i + 1] = (char)((int)s[i + 1] - 32);
			}
			j++;
		}
		i++;
	}
	return (s);
}
