#include <stdio.h>
/**
 *main-Entry point
 *
 *Return: alwasy 0(success)
 */
int main(void)
{
	int a;
	char alf;

	for ( a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (alf = 'a'; alf < 'f'; alf++)
	{
		putchar(alf);
	}
	putchar('\n');
	return (0);
}
