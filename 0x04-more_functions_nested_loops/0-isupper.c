#include "main.h"

/**
 * _isupper - a function that check if letter is uppercase
 * @c: the number to be checked
 * Return: 1 for upper and 0 for lower
 * _isupper - a function that checks for uppercase
 */
int _isupper(int c);
{
	int c;

	if (c >= 65 && c <= 98)
	{
		return (1);
	}

	else
		return (0);
}
