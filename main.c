#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	pid_t process_id_number;
	int n = 0;

	printf("hello world\n");
	while(1)
	{
		process_id_number = getpid();
		printf("%u\n", process_id_number);
		process_id_number = getppid();
		printf("%u\n", process_id_number);
		if(n == EOF)
			break;
	}

	return(0);
}
