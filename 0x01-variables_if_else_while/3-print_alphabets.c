#include <stdio.h>
#include <ctype.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')

	{
		putchar(letter);
		letter++;
	}
	{
		int Mayus1;

		for (Mayus1 = 'A'; Mayus1 <= 'Z'; Mayus1++)

		putchar(Mayus1);
		putchar('\n');
	}
	return (0);
}
