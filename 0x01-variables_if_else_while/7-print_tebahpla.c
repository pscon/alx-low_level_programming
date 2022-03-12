#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	char num = 123;

	num = num - 1;

	while (num >= 97)

	{

		putchar(num);
		num = num - 1;
	}

	putchar('\n');
	return (0);
}
