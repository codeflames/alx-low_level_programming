#include "main.h"

/**
* print_number - prints # using _putchar function
* @n: the integer to print
*
* Return: void
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n == 0)
	{
		_putchar(n);
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar('0' + (n % 10));
}
