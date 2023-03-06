#include <stdio.h>

/**
 * main - Entry point
 * Description: print a-zA-Z without printf and puts
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}

	return (0);
}
