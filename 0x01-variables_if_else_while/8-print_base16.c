#include <studio.h>
#include <ctype.h>
/**
 * main - Prints all single digits of base 16 followed by new line
 *
 * Return: return 0
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
		{
			digit = 'a';
			for (; digit <= 'f'; digit++)
			{
				putchar(char);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
				

