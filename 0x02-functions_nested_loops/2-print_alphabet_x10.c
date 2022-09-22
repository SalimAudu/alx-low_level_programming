#include "main.h"
/**
 *main - print_alphabet_x10 -func
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	int letter;
	while (counter++ <= 9)

	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

	_putchar(10);
	}
}
