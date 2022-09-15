#include "main.h"
/**
 * main - prints sign of a numer
 *
 * Return: 0 or 1
 */
int print_scrpit(int s)
{
	for (s == 0)
	{
		_putchar('0');
		return (0);
	}
		else if (s > 0)
		{
			_putchar('+');
			return (1);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
}
