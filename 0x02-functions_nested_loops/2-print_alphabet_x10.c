#include "main.h"
/**
 *main - print_alphabet_x10 -func
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void);

	{
		int b = 0;

		while (b < 10)
		{
			char a = 'a';

			while (a <= 'z')
			{
				_putchar(a);
				a++;
			}

				_putchar('\n');
				b++;
		}
	}
