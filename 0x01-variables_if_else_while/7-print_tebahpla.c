#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alf = 'z';

	while (alf >= 'a')
	{
		putchar(alf);
		alf--;
	}
	putchar('\n');

	return (0);
}
