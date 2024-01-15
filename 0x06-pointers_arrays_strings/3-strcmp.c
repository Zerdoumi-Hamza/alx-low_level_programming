#include "main.h"
/**
*_strcmp - Function compare two string
*@s1: First String
*@s2: Seconde string
*Return: Return integer.
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	for (s1[0]; s1[i] != '\0'; s1[i++])
	for (s2[0]; s2[j] != '\0'; s2[j++])
	j = j;
	if (i < j)
		return (-15);
	else if (i > j)
		return (15);
	else
		return (0);
}
