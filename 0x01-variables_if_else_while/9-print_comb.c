#include <stdio.h>
/**
 *main-Entry point
 *
 *Return: always 0(success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i < 58)
		{
			putchar(', ');
		}
	}
	putchar('\n');
	return (0);
}
