#include "main.h"
/**
*print_number - print numbers
*@n: takes in an integer
*/
void print_number(int n)
{
	int a, n_original, n1, x;

	a = 1;
	n_original = n;
	if (n == INT_MIN)
		n = n + 1;
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
			x = (n1 / a) % 10;
			if (a == 1 && n_original == INT_MIN)
				_putchar((x + 1) + '0');
			else
				_putchar(x + '0');
		}
	}
	else
		_putchar(n1 + '0');
}
