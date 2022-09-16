#include <stdio.h>
#include "main.h"

/**
 * print_number -prints numbers
 * @n:number to be printed
 * Return:void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
	putchar('-');
	num = -num;
		}

	if (num > 9)
	{
	print_number(num / 10);
	}
	_putchar (num % 10 + '0');
}
