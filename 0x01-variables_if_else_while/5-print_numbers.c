#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int val = 48;

	while (val < 58)
	{
		putchar(val);
		val++;
	}
	putchar('\n');

	return (0);
}
