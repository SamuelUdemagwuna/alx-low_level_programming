#include <stdio.h>

/**
 * main - creates two pairs of numbers that
 * does not repeat
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, i;

	for (j = 0; j <= 99; j++)
	{
		for (i = j; i <= 99; i++)
		{
			if (i != j)
			{
		putchar(j / 10 + 48);
		putchar(j % 10 + 48);
	putchar(' ');
putchar(i / 10 + 48);
putchar(i % 10 + 48);

if (j *  100 + i != 9899)
{
	putchar(',');
	putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
