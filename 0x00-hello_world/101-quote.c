#include <stdio.h>

/*
* main - Entry Point
* Description: print to standard error
* Return: Always 0 (Success)
*/

int main()
{
	char s [] = "'and that piece of art is useful' - Dora Korpar 2015-10-19";
	fprintf(stderr, "%s\n", s);

	return (0);
}