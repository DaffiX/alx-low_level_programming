#include "main.h"
/**
 * print_last_digit - prints the last digit of a num.
 * @t: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int t)
{
	if (t < 0)
		t = t * -1;
	_putchar((t % 10) + '0');
	return (t % 10);
}
