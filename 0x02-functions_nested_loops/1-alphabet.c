#include <stdio.h>

/**
 * main - write function to print lowercase alphabet
 *
 * Return: 0
 */
int main(void)
{
	void print_alphabet(void)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}

		putchar('\n');
	}

	print_alphabet();

	return (0);
}