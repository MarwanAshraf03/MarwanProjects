#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	while(*av)
	{
		printf("%s\n", *av);
		av++;
	}
	printf("succeeded!\n");
	return(0);
}
