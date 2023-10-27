#include "main.h"

/**
 * _strlen  - the function finds the length of a  string
 * @s: tring to be counted
 * Return: lenghth of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
