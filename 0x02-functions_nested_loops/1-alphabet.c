#include "main.h"
/**
 * main - Prints the alphabet in lowercase
 * It prints the alphabet in lowercase fallowed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alx;

	for (alx = 'a'; alx <= 'z'; alx++)
	{
		_putchar(alx);
	}
	_putchar('\n');
}
