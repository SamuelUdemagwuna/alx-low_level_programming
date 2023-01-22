#include <stdarg.h>
#include <stdio.h>

/**
 * print_string - a function that prints string, followed by a new line 
 *
 * @seperator: pointer to a constant seperator
 * @n: start of input variables
 *
 * Return: nothing
 */

void print_string(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;
	char *str;

	/*iterate the argument list from the start*/
	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (seperator && index != n - 1)
			printf("%s", seperator);
	}
	/*clean up*/
	va_end(ap);
	printf("\n");
}
