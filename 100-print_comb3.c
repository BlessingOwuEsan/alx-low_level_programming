#include <stdio.h>
#include <ctype.h>
 
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/* loop through a two digit mumbers*/

	int x, y;

	/* loop throgh the first digit */

	for (x = 0 ; x <= 8 ; x++)
	{
		/* loop throuh the second digit */
	
		for (y = x + 1 ; y <= 9 ; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');

			/* continue adding comma and space */

			if (x == 8 && y == 9)
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
