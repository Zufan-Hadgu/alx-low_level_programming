#include <stdio.h>
/**
 *main-Entry point
 *
 *Return:always 0(success)
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
