#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int den = 0;

	if (*s)
	{
		den++;
		den += _strlen_recursion(s + 1);

	}
	return (den);
} /*jonesink*/
