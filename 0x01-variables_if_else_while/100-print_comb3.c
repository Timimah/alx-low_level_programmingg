#include <stdio.h>

/**
 * main - a program that prints all possible 
 * differrent combinations of two digits
 * that are different followed by a ',' and a space
 * Return: main returns aero (i.e. success)
 */
int main(void)
{
	int n,m;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
			putchar(n,m);
		putchar(',');
		putchar(' ');
		putchar('\n');
	}
	return (0);
}