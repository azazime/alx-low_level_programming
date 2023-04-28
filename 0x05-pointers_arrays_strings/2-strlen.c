#include "main.h"
/**
 * _strlen: returns the length of a string in a function
 * @s: the string in the function
 * return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
