#include <stdio.h>
#include <ctype.h>
/**
 * main Program  program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 *
 * Return: return 0
 */
int main (void)
{
	int letter;
	for (letter ='a'; letter <= 'z'; letter++)
	{
		letter = tolwer(letter);
		putchar(letter);
		if (letter == 'z')
		{
			letter = 'A';
			for(; letter <= 'Z'; letter++)
			{
				putchar(letter);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}

