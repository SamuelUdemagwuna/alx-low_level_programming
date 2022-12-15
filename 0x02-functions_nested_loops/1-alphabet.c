#include "main.h"

/**
 * print_alphabet - prints alphabets in lower
 * case, followed by a new line
 */
void print_alphabet(void)
{
	char al;

	al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}

	_putchar('\n');
}

