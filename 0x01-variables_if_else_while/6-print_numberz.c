#include <stdio.h>
/**
 *main-Entry point
 *
 *Return: always 0 (success)
 */
int main(void)
{
	char a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
