#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - the main function
 *
 * Return: zero
 */
int main(void)
{
	char *buf; 
	int n;
	while(1)
	{
		printf("$: ");
		n = read(0, buf, 1024);
		write(1, buf, n);
		putchar('\n');
	}
	return 0;
}
