#include <stdio.h>

/**
 * main - Prints numberes between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int e;

	i = 48;
	e = 58;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < 1)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}