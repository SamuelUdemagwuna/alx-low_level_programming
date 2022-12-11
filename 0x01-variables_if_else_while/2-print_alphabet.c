#include <stdio.h>

/**
 * main - Prints the alphabet from A-z
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar (a);
		a++;
	}
	putchar ('\n');
	return (0);
}
