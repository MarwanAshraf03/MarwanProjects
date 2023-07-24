#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(void)
{
	char *str = "hello";
	while(*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
