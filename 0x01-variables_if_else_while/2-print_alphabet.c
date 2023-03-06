#include <stdio.h>

/**
 * main - Entry point
 * Description: print a-z without printf and puts
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	return (0);
}
