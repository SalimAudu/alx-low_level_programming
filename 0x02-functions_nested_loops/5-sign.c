#include "main.h"
/**
 * main - prints sign of a numer
 *
 * Return: 0 or 1
 */
int print_scrpit(int n)
{
	for (n > 0)
	{
		_putchar('+');
		return (1);
	}
		else if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		return (0);
}
