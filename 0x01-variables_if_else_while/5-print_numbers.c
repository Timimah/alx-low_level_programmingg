#include <stdio.h>

/**
 * main - prints all single digit numbers
 * of base 10 starting from 0
 * Return: main returns 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 10; number++)
	{
		printf(number);
	}
	return (0);
}
