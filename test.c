#include <unistd.h>
#include <stdio.h>
int main(void)
{
	char *buf = "hi.\n";
	int n = 4;

/*	while((n = read(0, buf, 1)) != EOF)*/
	
		write(1, buf, n);
		/*while(*buf){
			write(1, *buf, 1);
			printf("%c", *buf);
			buf++;
		}*/
	return(0);
}
