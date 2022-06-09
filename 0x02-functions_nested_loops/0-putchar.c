#include "main.h"
/**
 *main-printing putchar
 *
 *Return: always 0(success)
 */
int main(void)
{
	char word[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_puthchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
