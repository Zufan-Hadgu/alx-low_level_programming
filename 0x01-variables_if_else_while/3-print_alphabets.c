#include <stdio.h>
/**
 *main-Entry point 
 *
 *Return: Always 0(success)
 */
int main(void)
{
	char alf;

	for (alf ='a'; alf <= 'z'; alf++)
	{
		putchar(alf);
	}
	for (alf ='A'; alf <= 'Z'; alf++)
	{
		putchar(alf);
	}
	putchar('\n');
	return (0);
}
