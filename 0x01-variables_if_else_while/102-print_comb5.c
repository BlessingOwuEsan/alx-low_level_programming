#include <stdio.h>

/**
 * main - Entry point of the program
 *  *
 *  Return: Always 0 (success)
 */

int main(void)
{
	int x, y;

	/* loop through two digit number nest it been declared */

	for (x = 0 ; x <= 98 ; x++)
	{
		/* loop the second the digit */

		for (y = x + 1 ; y <= 99 ; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');

			/* continue adding space and comma */

			if (x == 98 && y == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
