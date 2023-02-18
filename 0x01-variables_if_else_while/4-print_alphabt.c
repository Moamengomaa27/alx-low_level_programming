#include <stdio.h>
/* more headers goes there */
/*
 *
 * main - entry point
 * return 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char c;
	c = 'a';
	while	
		(c <= 'z') {
			if (( c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');	
	return (0);
}
