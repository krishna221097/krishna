#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	int cpid=fork();
	if(cpid==0)
	{
		while(1)	
			putchar('x');
	}
	else
	{
		while(1)
			putc('0',stdout);
	}
	return 0;
}
	
