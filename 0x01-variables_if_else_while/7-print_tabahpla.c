#include <stdio.h>

/**
 * main - Print the alphabet at reverse
 *
 * Return: Always (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		outchar(c);
	}

	putchar('\n');

	return (0);
}
