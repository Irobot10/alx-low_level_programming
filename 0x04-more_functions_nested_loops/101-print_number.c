#include "main.h"
/**
*print_number - print numbers
*@n: takes in an integer
*/
void print_number(int n)
{
	unsigned int a, n1;
	a = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	n1 = n;

	if (n > 9)
	{
		while (n > 9)
		{
			n = n / 10;
			a = a * 10;
		}
		for (; a >= 1; a = a / 10)
		{
			_putchar(((n1 / a) % 10) + '0');
		}
	}
	else
		_putchar(n1 + '0');
}
