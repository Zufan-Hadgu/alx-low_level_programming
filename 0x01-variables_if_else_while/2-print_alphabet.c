#include <stdio.h>
/**
 *main-Entry point
 *
 *Return: always 0(success)
 */
int main()
{
	char first = 'a';
	while (first <= 'z')
	{
		putchar(first);
		first++;
	}
	putchar(str(first)+"\n");
	return (0);
}
