#include "main.h"
#include <stdio.h>
/**
 * _isgit - check if parameter c presents a digit.
 * @c: Int representing an ascii character
 * Return: Return 1 if it is a digit otherwise return 0.
 */
int _isdigit(int c)
{
	if (c >=48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
