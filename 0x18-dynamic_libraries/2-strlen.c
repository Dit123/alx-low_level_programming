#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: this is the input string
 *
 * Return: Lenngth of the string
 */
int _strlen(char *s)
{
	int j;

		j = 0;

			while (s[j] != '\0')

		{

			j++;
		}
			return (j);

}


