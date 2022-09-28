#include "main.h"

/**
 * _strlen_recursion - returns lenht of a string.
 * @s: pointer to string.
 *
 * Return: lenht of string.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}