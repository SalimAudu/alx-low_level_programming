#include <stdio.h>
#include <ctype.h>
/**
 * main - program to print alhabet letters except q and e
 *
 * Return: return 0
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'g' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}