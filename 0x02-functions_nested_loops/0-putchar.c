#include <unistd.h>
#include "main.h"
/**
 * main - Entry point print the characters
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "PapaDaffy";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
