#include <stdio.h>
/**
 *main-Entry point
 *
 *Return: always 0(success)
 */
int main(void)
{
	char alf = 'z';

	while (alf >= 'a')
	{
		putchar(alf);
		alf--;
	}
	putchar('\n');
	return (0);
}
