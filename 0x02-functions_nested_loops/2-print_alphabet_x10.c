#include "main.h"

/**
 * 2-print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= '2'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
