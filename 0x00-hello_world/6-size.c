#include <stdio.h>

/**
* main - Entry point
* Description: print size of datatypes
* Return: Always 0 (Success)
*/

int main()
{
	int c = sizeof(char);
	int n = sizeof(int);
	int li = sizeof(long int);
	int lli = sizeof(long long int);
	int f = sizeof(f);

	printf("Size of a char: \t\t%d byte(s) \n", c);
	printf("Size of an int: \t\t%d byte(s) \n", n);
	printf("Size of a long int: \t\t%d byte(s) \n", li);
	printf("Size of a long long int: \t%d byte(s) \n", lli);
	printf("Size of a float: \t\t%d byte(s) \n", f);

	return (0);

}