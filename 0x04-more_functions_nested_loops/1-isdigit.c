#include "main.h"

/**
 * _isdigit - a function that checks for digits 0-9
 * @c: the digit to be checked
 * Return: 1 if a digit and 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
		return (0);
}
