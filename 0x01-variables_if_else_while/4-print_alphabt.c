#include <stdio.h>

/**
 * main - Entry point
 * Description: print a-zA-Z without printf and puts
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';
	char d = 'f';
	char k = 'r';

	while (c < 'e')
	{
		putchar(c);
		c++;
	}

	while (d < 'q')
	{
		putchar(d);
		d++;
	}

	while (k <= 'z')
	{
		putchar(k);
		k++;
	}

	return (0);
}
